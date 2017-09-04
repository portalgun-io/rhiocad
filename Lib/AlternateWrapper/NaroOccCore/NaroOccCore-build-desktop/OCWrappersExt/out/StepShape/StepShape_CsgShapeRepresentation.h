// File generated by CPPExt (MPV)
//
#ifndef _StepShape_CsgShapeRepresentation_OCWrappers_HeaderFile
#define _StepShape_CsgShapeRepresentation_OCWrappers_HeaderFile

// include native header
#include <StepShape_CsgShapeRepresentation.hxx>
#include "../Converter.h"

#include "StepShape_ShapeRepresentation.h"

#include "StepShape_ShapeRepresentation.h"


namespace OCNaroWrappers
{




public ref class OCStepShape_CsgShapeRepresentation  : public OCStepShape_ShapeRepresentation {

protected:
  // dummy constructor;
  OCStepShape_CsgShapeRepresentation(OCDummy^) : OCStepShape_ShapeRepresentation((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepShape_CsgShapeRepresentation(StepShape_CsgShapeRepresentation* nativeHandle);

// Methods PUBLIC

//! Returns a CsgShapeRepresentation <br>
OCStepShape_CsgShapeRepresentation();

~OCStepShape_CsgShapeRepresentation()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif