// File generated by CPPExt (MPV)
//
#ifndef _StepVisual_InvisibleItem_OCWrappers_HeaderFile
#define _StepVisual_InvisibleItem_OCWrappers_HeaderFile

// include native header
#include <StepVisual_InvisibleItem.hxx>
#include "../Converter.h"

#include "../StepData/StepData_SelectType.h"

#include "../StepData/StepData_SelectType.h"


namespace OCNaroWrappers
{

ref class OCStandard_Transient;
ref class OCStepVisual_StyledItem;
ref class OCStepVisual_PresentationLayerAssignment;
ref class OCStepVisual_PresentationRepresentation;



public ref class OCStepVisual_InvisibleItem  : public OCStepData_SelectType {

protected:
  // dummy constructor;
  OCStepVisual_InvisibleItem(OCDummy^) : OCStepData_SelectType((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepVisual_InvisibleItem(StepVisual_InvisibleItem* nativeHandle);

// Methods PUBLIC

//! Returns a InvisibleItem SelectType <br>
OCStepVisual_InvisibleItem();

//! Recognizes a InvisibleItem Kind Entity that is : <br>
//!        1 -> StyledItem <br>
//!        2 -> PresentationLayerAssignment <br>
//!        3 -> PresentationRepresentation <br>
//!        0 else <br>
 /*instead*/  Standard_Integer CaseNum(OCNaroWrappers::OCStandard_Transient^ ent) ;

//! returns Value as a StyledItem (Null if another type) <br>
 /*instead*/  OCStepVisual_StyledItem^ StyledItem() ;

//! returns Value as a PresentationLayerAssignment (Null if another type) <br>
 /*instead*/  OCStepVisual_PresentationLayerAssignment^ PresentationLayerAssignment() ;

//! returns Value as a PresentationRepresentation (Null if another type) <br>
 /*instead*/  OCStepVisual_PresentationRepresentation^ PresentationRepresentation() ;

~OCStepVisual_InvisibleItem()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif