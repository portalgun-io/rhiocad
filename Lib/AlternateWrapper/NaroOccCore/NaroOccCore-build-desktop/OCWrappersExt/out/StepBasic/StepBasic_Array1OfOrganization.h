// File generated by CPPExt (MPV)
//
#ifndef _StepBasic_Array1OfOrganization_OCWrappers_HeaderFile
#define _StepBasic_Array1OfOrganization_OCWrappers_HeaderFile

// include native header
#include <StepBasic_Array1OfOrganization.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCStepBasic_Organization;



public ref class OCStepBasic_Array1OfOrganization  {

protected:
  StepBasic_Array1OfOrganization* nativeHandle;
  OCStepBasic_Array1OfOrganization(OCDummy^) {};

public:
  property StepBasic_Array1OfOrganization* Handle
  {
    StepBasic_Array1OfOrganization* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCStepBasic_Array1OfOrganization(StepBasic_Array1OfOrganization* nativeHandle);

// Methods PUBLIC


OCStepBasic_Array1OfOrganization(Standard_Integer Low, Standard_Integer Up);


OCStepBasic_Array1OfOrganization(OCNaroWrappers::OCStepBasic_Organization^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCStepBasic_Organization^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCStepBasic_Array1OfOrganization^ Assign(OCNaroWrappers::OCStepBasic_Array1OfOrganization^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepBasic_Organization^ Value) ;


 /*instead*/  OCStepBasic_Organization^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepBasic_Organization^ ChangeValue(Standard_Integer Index) ;

~OCStepBasic_Array1OfOrganization()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif