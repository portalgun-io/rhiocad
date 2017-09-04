// File generated by CPPExt (MPV)
//
#ifndef _IntPatch_SequenceOfPathPointOfTheSOnBounds_OCWrappers_HeaderFile
#define _IntPatch_SequenceOfPathPointOfTheSOnBounds_OCWrappers_HeaderFile

// include native header
#include <IntPatch_SequenceOfPathPointOfTheSOnBounds.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCIntPatch_ThePathPointOfTheSOnBounds;
ref class OCIntPatch_SequenceNodeOfSequenceOfPathPointOfTheSOnBounds;



public ref class OCIntPatch_SequenceOfPathPointOfTheSOnBounds  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCIntPatch_SequenceOfPathPointOfTheSOnBounds(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntPatch_SequenceOfPathPointOfTheSOnBounds(IntPatch_SequenceOfPathPointOfTheSOnBounds* nativeHandle);

// Methods PUBLIC


OCIntPatch_SequenceOfPathPointOfTheSOnBounds();


 /*instead*/  OCIntPatch_SequenceOfPathPointOfTheSOnBounds^ Assign(OCNaroWrappers::OCIntPatch_SequenceOfPathPointOfTheSOnBounds^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCIntPatch_ThePathPointOfTheSOnBounds^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCIntPatch_SequenceOfPathPointOfTheSOnBounds^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCIntPatch_ThePathPointOfTheSOnBounds^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCIntPatch_SequenceOfPathPointOfTheSOnBounds^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCIntPatch_ThePathPointOfTheSOnBounds^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCIntPatch_SequenceOfPathPointOfTheSOnBounds^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCIntPatch_ThePathPointOfTheSOnBounds^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCIntPatch_SequenceOfPathPointOfTheSOnBounds^ S) ;


 /*instead*/  OCIntPatch_ThePathPointOfTheSOnBounds^ First() ;


 /*instead*/  OCIntPatch_ThePathPointOfTheSOnBounds^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCIntPatch_SequenceOfPathPointOfTheSOnBounds^ Sub) ;


 /*instead*/  OCIntPatch_ThePathPointOfTheSOnBounds^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCIntPatch_ThePathPointOfTheSOnBounds^ I) ;


 /*instead*/  OCIntPatch_ThePathPointOfTheSOnBounds^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCIntPatch_SequenceOfPathPointOfTheSOnBounds()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif