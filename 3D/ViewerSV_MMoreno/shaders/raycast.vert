#version 330

layout (location = 0) in vec3 vert;

uniform mat4 projection;
uniform mat4 view;
uniform mat4 model;

uniform vec3 lightPos;

smooth out vec3 tex_coords;
smooth out vec3 position;
smooth out vec3 cameraPos;

void main(void)  {
  tex_coords = vert + vec3(0.5);
  position = vert;

  cameraPos = ( inverse( view ) * vec4( 0,0,0, 1 ) ).xyz;

  gl_Position = projection * view * model * vec4(vert, 1);
}
