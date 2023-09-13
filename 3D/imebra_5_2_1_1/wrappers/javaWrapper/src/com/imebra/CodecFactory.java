/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.12
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package com.imebra;

public class CodecFactory {
  private transient long swigCPtr;
  protected transient boolean swigCMemOwn;

  protected CodecFactory(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(CodecFactory obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        imebraJNI.delete_CodecFactory(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public static DataSet load(StreamReader reader, long maxSizeBufferLoad) {
    return new DataSet(imebraJNI.CodecFactory_load__SWIG_0(StreamReader.getCPtr(reader), reader, maxSizeBufferLoad), true);
  }

  public static DataSet load(StreamReader reader) {
    return new DataSet(imebraJNI.CodecFactory_load__SWIG_1(StreamReader.getCPtr(reader), reader), true);
  }

  public static DataSet load(String fileName, long maxSizeBufferLoad) {
    return new DataSet(imebraJNI.CodecFactory_load__SWIG_2(fileName, maxSizeBufferLoad), true);
  }

  public static DataSet load(String fileName) {
    return new DataSet(imebraJNI.CodecFactory_load__SWIG_3(fileName), true);
  }

  public static void saveImage(StreamWriter destStream, Image sourceImage, String transferSyntax, imageQuality_t imageQuality_t, long allocatedBits, boolean bSubSampledX, boolean bSubSampledY, boolean bInterleaved, boolean b2Complement) {
    imebraJNI.CodecFactory_saveImage(StreamWriter.getCPtr(destStream), destStream, Image.getCPtr(sourceImage), sourceImage, transferSyntax, imageQuality_t.swigValue(), allocatedBits, bSubSampledX, bSubSampledY, bInterleaved, b2Complement);
  }

  public static void save(DataSet dataSet, StreamWriter writer, codecType_t codecType) {
    imebraJNI.CodecFactory_save__SWIG_0(DataSet.getCPtr(dataSet), dataSet, StreamWriter.getCPtr(writer), writer, codecType.swigValue());
  }

  public static void save(DataSet dataSet, String fileName, codecType_t codecType) {
    imebraJNI.CodecFactory_save__SWIG_1(DataSet.getCPtr(dataSet), dataSet, fileName, codecType.swigValue());
  }

  public static void setMaximumImageSize(long maximumWidth, long maximumHeight) {
    imebraJNI.CodecFactory_setMaximumImageSize(maximumWidth, maximumHeight);
  }

  public CodecFactory() {
    this(imebraJNI.new_CodecFactory(), true);
  }

}
