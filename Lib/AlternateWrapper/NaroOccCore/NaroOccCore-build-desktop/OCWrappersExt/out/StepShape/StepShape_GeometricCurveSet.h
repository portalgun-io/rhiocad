// File generated by CPPExt (MPV)
//
#ifndef _StepShape_GeometricCurveSet_OCWrappers_HeaderFile
#define _StepShape_GeometricCurveSet_OCWrappers_HeaderFile

// include native header
#include <StepShape_GeometricCurveSet.hxx>
#include "../Converter.h"

#include "StepShape_GeometricSet.h"

#include "StepShape_GeometricSet.h"


namespace OCNaroWrappers
{




public ref class OCStepShape_GeometricCurveSet  : public OCStepShape_GeometricSet {

protected:
  // dummy constructor;
  OCStepShape_GeometricCurveSet(OCDummy^) : OCStepShape_GeometricSet((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepShape_GeometricCurveSet(StepShape_GeometricCurveSet* nativeHandle);

// Methods PUBLIC

//! Returns a GeometricCurveSet <br>
OCStepShape_GeometricCurveSet();

~OCStepShape_GeometricCurveSet()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif