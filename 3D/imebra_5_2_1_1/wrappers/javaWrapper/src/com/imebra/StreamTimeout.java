/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.12
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package com.imebra;

public class StreamTimeout {
  private transient long swigCPtr;
  protected transient boolean swigCMemOwn;

  protected StreamTimeout(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(StreamTimeout obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        imebraJNI.delete_StreamTimeout(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public StreamTimeout(BaseStreamInput stream, long timeoutSeconds) {
    this(imebraJNI.new_StreamTimeout__SWIG_0(BaseStreamInput.getCPtr(stream), stream, timeoutSeconds), true);
  }

  public StreamTimeout(StreamTimeout source) {
    this(imebraJNI.new_StreamTimeout__SWIG_1(StreamTimeout.getCPtr(source), source), true);
  }

}
