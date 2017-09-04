// File generated by CPPExt (MPV)
//
#ifndef _StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem_OCWrappers_HeaderFile
#define _StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem_OCWrappers_HeaderFile

// include native header
#include <StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCStepBasic_MeasureWithUnit;
ref class OCStepShape_HArray1OfValueQualifier;
ref class OCTCollection_HAsciiString;
ref class OCStepBasic_MeasureValueMember;
ref class OCStepBasic_Unit;
ref class OCStepShape_ValueQualifier;


//! Added for Dimensional Tolerances <br>
//!           Complex Type between MeasureRepresentationItem and <br>
//!             QualifiedRepresentationItem <br>
public ref class OCStepShape_MeasureRepresentationItemAndQualifiedRepresentationItem  {

protected:
  StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem* nativeHandle;
  OCStepShape_MeasureRepresentationItemAndQualifiedRepresentationItem(OCDummy^) {};

public:
  property StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem* Handle
  {
    StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCStepShape_MeasureRepresentationItemAndQualifiedRepresentationItem(StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem* nativeHandle);

// Methods PUBLIC


OCStepShape_MeasureRepresentationItemAndQualifiedRepresentationItem();


 /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepBasic_MeasureValueMember^ aValueComponent, OCNaroWrappers::OCStepBasic_Unit^ aUnitComponent, OCNaroWrappers::OCStepShape_HArray1OfValueQualifier^ qualifiers) ;


 /*instead*/  void SetMeasure(OCNaroWrappers::OCStepBasic_MeasureWithUnit^ Measure) ;


 /*instead*/  OCStepBasic_MeasureWithUnit^ Measure() ;


 /*instead*/  OCStepShape_HArray1OfValueQualifier^ Qualifiers() ;


 /*instead*/  Standard_Integer NbQualifiers() ;


 /*instead*/  void SetQualifiers(OCNaroWrappers::OCStepShape_HArray1OfValueQualifier^ qualifiers) ;


 /*instead*/  OCStepShape_ValueQualifier^ QualifiersValue(Standard_Integer num) ;


 /*instead*/  void SetQualifiersValue(Standard_Integer num, OCNaroWrappers::OCStepShape_ValueQualifier^ aqualifier) ;

~OCStepShape_MeasureRepresentationItemAndQualifiedRepresentationItem()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif