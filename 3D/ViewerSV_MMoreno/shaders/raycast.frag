#version 330

smooth in vec3 tex_coords;
smooth in vec3 position;
smooth in vec3 cameraPos;

uniform float ITER;
uniform float K;

uniform int usePhong;
uniform int useHAS;
uniform int basicTF;
uniform vec3 lightCol;
uniform vec3 lightPos;

uniform sampler3D volume;
uniform sampler1D transferFunc;
uniform sampler1D transferFunc2;

/*uniform*/ float ambiance;
/*uniform*/ float specular;
/*uniform*/ float diffusion;

out vec4 frag_color;


vec3 getNormalFromVol( vec3 point )
{
    float e = 1.0f / 10.0f;

    vec3 sampledPoint;
    sampledPoint = vec3(
        texture( volume, point + vec3( e, 0, 0 ) ).r - texture( volume, point - vec3( e, 0, 0 ) ).r ,
        texture( volume, point + vec3( 0, e, 0 ) ).r - texture( volume, point - vec3( 0, e, 0 ) ).r ,
        texture( volume, point + vec3( 0, 0, e ) ).r - texture( volume, point - vec3( 0, 0, e ) ).r
    );
    return normalize( sampledPoint );
}

// less process-consuming, but not as correct
vec3 getNormalFromVolFast( vec3 point )
{
    float e = 0.1;

    vec3 sampledPoint;
    sampledPoint = texture( volume, point + vec3( e, e, e ) ).rrr -  texture( volume, point + vec3( e, e, e ) ).rrr;
    return normalize( sampledPoint );
}





void main (void) {
    vec3 pos = tex_coords;  // position for volume entry (i.e. front)
    vec3 dir      = normalize( position - cameraPos ); // ray direction


    vec4 acc_Colour = vec4( 0 ); // accumulated Colour
    float STEP = (1.0f / ITER);
    // RAY MARCHING | Front to Back
    for ( int i = 0; i < ITER; ++i )
    {
        vec4 textureValue = texture( volume, pos );  // get texture from images
        float density = textureValue.r;  // get red component from texture

        if (density > 0.01f) {
            vec4 curr_Colour = vec4( 0 );
            vec4 TFCol = vec4(0);
            if (basicTF == 1)
            {
                curr_Colour = K * texture( transferFunc, density ); // get colour sample from transfer function BASIC
                TFCol = vec4( curr_Colour.a );
            }
            else
            {
                curr_Colour = K * texture( transferFunc2, density ); // get colour sample from transfer function ADV
                TFCol = curr_Colour;
            }
            // Terminate if density accumulation reaches opaque values
            if (1 <= acc_Colour.a ) break;
            acc_Colour.rgba += ( 1 - acc_Colour.a ) * TFCol * textureValue.rrra ;

            // PHONG SHADING
            if ( usePhong == 1 )
            {
                // ambient lighting component

                vec3 lightColor = lightCol;
                vec3 lightPosition = lightPos;

                float ambientStrength = 0.1f;
                vec3 ambient = ambientStrength * lightColor;

                // diffuse lighting component
                float diffuseStrength = 1.0f;
                vec3 norm     = getNormalFromVol( pos );
                vec3 lightDir = normalize(lightPosition - pos );
                float diff    = max( dot(norm, lightDir), 0.0f );
                vec3 diffuse  = diffuseStrength * diff * lightColor;

                // specular lighting component
                float specularStrength = 0.2f;
                vec3 viewDir    = normalize(cameraPos - pos );
                vec3 reflectDir = reflect( -lightDir, norm );
                float VdR       = dot(viewDir, reflectDir);

                float spec = pow( max( VdR, 0.0f ), 32 );
                vec3 specular = specularStrength * spec * lightCol;

                vec3 resultRGB = ( (ambient + diffuse + specular) * acc_Colour.rgb );
                float resultA = acc_Colour.a;
                acc_Colour = vec4( resultRGB, resultA );

            }

        }

        pos += dir * STEP ;

        // If ray is not in the the cube, break.
        if (  pos.x <= 0  || 1 <= pos.x
           || pos.y <= 0  || 1 <= pos.y
           || pos.z <= 0  || 1 <= pos.z ) break;
    }

    frag_color = acc_Colour;
}


