// File generated by CPPExt (MPV)
//
#ifndef _IntTools_CurveRangeSample_OCWrappers_HeaderFile
#define _IntTools_CurveRangeSample_OCWrappers_HeaderFile

// include native header
#include <IntTools_CurveRangeSample.hxx>
#include "../Converter.h"

#include "IntTools_BaseRangeSample.h"

#include "IntTools_BaseRangeSample.h"


namespace OCNaroWrappers
{

ref class OCIntTools_Range;



public ref class OCIntTools_CurveRangeSample  : public OCIntTools_BaseRangeSample {

protected:
  // dummy constructor;
  OCIntTools_CurveRangeSample(OCDummy^) : OCIntTools_BaseRangeSample((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntTools_CurveRangeSample(IntTools_CurveRangeSample* nativeHandle);

// Methods PUBLIC


OCIntTools_CurveRangeSample();


OCIntTools_CurveRangeSample(Standard_Integer theIndex);


 /*instead*/  void SetRangeIndex(Standard_Integer theIndex) ;


 /*instead*/  Standard_Integer GetRangeIndex() ;


 /*instead*/  System::Boolean IsEqual(OCNaroWrappers::OCIntTools_CurveRangeSample^ Other) ;


 /*instead*/  OCIntTools_Range^ GetRange(Standard_Real theFirst, Standard_Real theLast, Standard_Integer theNbSample) ;


 /*instead*/  Standard_Integer GetRangeIndexDeeper(Standard_Integer theNbSample) ;

~OCIntTools_CurveRangeSample()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif