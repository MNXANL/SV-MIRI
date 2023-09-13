/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.12
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package com.imebra;

public class BaseStreamOutput {
  private transient long swigCPtr;
  protected transient boolean swigCMemOwn;

  protected BaseStreamOutput(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(BaseStreamOutput obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        imebraJNI.delete_BaseStreamOutput(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public BaseStreamOutput(BaseStreamOutput source) {
    this(imebraJNI.new_BaseStreamOutput(BaseStreamOutput.getCPtr(source), source), true);
  }

}