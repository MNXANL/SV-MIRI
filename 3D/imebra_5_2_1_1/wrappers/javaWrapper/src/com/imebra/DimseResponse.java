/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.12
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package com.imebra;

public class DimseResponse extends DimseCommandBase {
  private transient long swigCPtr;

  protected DimseResponse(long cPtr, boolean cMemoryOwn) {
    super(imebraJNI.DimseResponse_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(DimseResponse obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        imebraJNI.delete_DimseResponse(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public DimseResponse(DimseResponse source) {
    this(imebraJNI.new_DimseResponse(DimseResponse.getCPtr(source), source), true);
  }

  public dimseStatus_t getStatus() {
    return dimseStatus_t.swigToEnum(imebraJNI.DimseResponse_getStatus(swigCPtr, this));
  }

  public int getStatusCode() {
    return imebraJNI.DimseResponse_getStatusCode(swigCPtr, this);
  }

}
