// File generated by CPPExt (Transient)
//
#ifndef _StepAP214_Class_OCWrappers_HeaderFile
#define _StepAP214_Class_OCWrappers_HeaderFile

// include the wrapped class
#include <StepAP214_Class.hxx>
#include "../Converter.h"

#include "../StepBasic/StepBasic_Group.h"



namespace OCNaroWrappers
{



//! Representation of STEP entity Class <br>
public ref class OCStepAP214_Class : OCStepBasic_Group {

protected:
  // dummy constructor;
  OCStepAP214_Class(OCDummy^) : OCStepBasic_Group((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepAP214_Class(Handle(StepAP214_Class)* nativeHandle);

// Methods PUBLIC

//! Empty constructor <br>
OCStepAP214_Class();

~OCStepAP214_Class()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif