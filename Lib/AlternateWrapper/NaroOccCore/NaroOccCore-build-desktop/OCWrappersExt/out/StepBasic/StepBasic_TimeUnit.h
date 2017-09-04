// File generated by CPPExt (Transient)
//
#ifndef _StepBasic_TimeUnit_OCWrappers_HeaderFile
#define _StepBasic_TimeUnit_OCWrappers_HeaderFile

// include the wrapped class
#include <StepBasic_TimeUnit.hxx>
#include "../Converter.h"

#include "StepBasic_NamedUnit.h"



namespace OCNaroWrappers
{




public ref class OCStepBasic_TimeUnit : OCStepBasic_NamedUnit {

protected:
  // dummy constructor;
  OCStepBasic_TimeUnit(OCDummy^) : OCStepBasic_NamedUnit((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepBasic_TimeUnit(Handle(StepBasic_TimeUnit)* nativeHandle);

// Methods PUBLIC

//! Returns a TimeUnit <br>
OCStepBasic_TimeUnit();

~OCStepBasic_TimeUnit()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif