// File generated by CPPExt (CPP file)
//

#include "ChFiDS_SequenceOfSurfData.h"
#include "../Converter.h"
#include "ChFiDS_SurfData.h"
#include "ChFiDS_SequenceNodeOfSequenceOfSurfData.h"


using namespace OCNaroWrappers;

OCChFiDS_SequenceOfSurfData::OCChFiDS_SequenceOfSurfData(ChFiDS_SequenceOfSurfData* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCChFiDS_SequenceOfSurfData::OCChFiDS_SequenceOfSurfData() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new ChFiDS_SequenceOfSurfData();
}

OCChFiDS_SequenceOfSurfData^ OCChFiDS_SequenceOfSurfData::Assign(OCNaroWrappers::OCChFiDS_SequenceOfSurfData^ Other)
{
  ChFiDS_SequenceOfSurfData* tmp = new ChFiDS_SequenceOfSurfData();
  *tmp = ((ChFiDS_SequenceOfSurfData*)nativeHandle)->Assign(*((ChFiDS_SequenceOfSurfData*)Other->Handle));
  return gcnew OCChFiDS_SequenceOfSurfData(tmp);
}

 void OCChFiDS_SequenceOfSurfData::Append(OCNaroWrappers::OCChFiDS_SurfData^ T)
{
  ((ChFiDS_SequenceOfSurfData*)nativeHandle)->Append(*((Handle_ChFiDS_SurfData*)T->Handle));
}

 void OCChFiDS_SequenceOfSurfData::Append(OCNaroWrappers::OCChFiDS_SequenceOfSurfData^ S)
{
  ((ChFiDS_SequenceOfSurfData*)nativeHandle)->Append(*((ChFiDS_SequenceOfSurfData*)S->Handle));
}

 void OCChFiDS_SequenceOfSurfData::Prepend(OCNaroWrappers::OCChFiDS_SurfData^ T)
{
  ((ChFiDS_SequenceOfSurfData*)nativeHandle)->Prepend(*((Handle_ChFiDS_SurfData*)T->Handle));
}

 void OCChFiDS_SequenceOfSurfData::Prepend(OCNaroWrappers::OCChFiDS_SequenceOfSurfData^ S)
{
  ((ChFiDS_SequenceOfSurfData*)nativeHandle)->Prepend(*((ChFiDS_SequenceOfSurfData*)S->Handle));
}

 void OCChFiDS_SequenceOfSurfData::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCChFiDS_SurfData^ T)
{
  ((ChFiDS_SequenceOfSurfData*)nativeHandle)->InsertBefore(Index, *((Handle_ChFiDS_SurfData*)T->Handle));
}

 void OCChFiDS_SequenceOfSurfData::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCChFiDS_SequenceOfSurfData^ S)
{
  ((ChFiDS_SequenceOfSurfData*)nativeHandle)->InsertBefore(Index, *((ChFiDS_SequenceOfSurfData*)S->Handle));
}

 void OCChFiDS_SequenceOfSurfData::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCChFiDS_SurfData^ T)
{
  ((ChFiDS_SequenceOfSurfData*)nativeHandle)->InsertAfter(Index, *((Handle_ChFiDS_SurfData*)T->Handle));
}

 void OCChFiDS_SequenceOfSurfData::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCChFiDS_SequenceOfSurfData^ S)
{
  ((ChFiDS_SequenceOfSurfData*)nativeHandle)->InsertAfter(Index, *((ChFiDS_SequenceOfSurfData*)S->Handle));
}

OCChFiDS_SurfData^ OCChFiDS_SequenceOfSurfData::First()
{
  Handle(ChFiDS_SurfData) tmp = ((ChFiDS_SequenceOfSurfData*)nativeHandle)->First();
  return gcnew OCChFiDS_SurfData(&tmp);
}

OCChFiDS_SurfData^ OCChFiDS_SequenceOfSurfData::Last()
{
  Handle(ChFiDS_SurfData) tmp = ((ChFiDS_SequenceOfSurfData*)nativeHandle)->Last();
  return gcnew OCChFiDS_SurfData(&tmp);
}

 void OCChFiDS_SequenceOfSurfData::Split(Standard_Integer Index, OCNaroWrappers::OCChFiDS_SequenceOfSurfData^ Sub)
{
  ((ChFiDS_SequenceOfSurfData*)nativeHandle)->Split(Index, *((ChFiDS_SequenceOfSurfData*)Sub->Handle));
}

OCChFiDS_SurfData^ OCChFiDS_SequenceOfSurfData::Value(Standard_Integer Index)
{
  Handle(ChFiDS_SurfData) tmp = ((ChFiDS_SequenceOfSurfData*)nativeHandle)->Value(Index);
  return gcnew OCChFiDS_SurfData(&tmp);
}

 void OCChFiDS_SequenceOfSurfData::SetValue(Standard_Integer Index, OCNaroWrappers::OCChFiDS_SurfData^ I)
{
  ((ChFiDS_SequenceOfSurfData*)nativeHandle)->SetValue(Index, *((Handle_ChFiDS_SurfData*)I->Handle));
}

OCChFiDS_SurfData^ OCChFiDS_SequenceOfSurfData::ChangeValue(Standard_Integer Index)
{
  Handle(ChFiDS_SurfData) tmp = ((ChFiDS_SequenceOfSurfData*)nativeHandle)->ChangeValue(Index);
  return gcnew OCChFiDS_SurfData(&tmp);
}

 void OCChFiDS_SequenceOfSurfData::Remove(Standard_Integer Index)
{
  ((ChFiDS_SequenceOfSurfData*)nativeHandle)->Remove(Index);
}

 void OCChFiDS_SequenceOfSurfData::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((ChFiDS_SequenceOfSurfData*)nativeHandle)->Remove(FromIndex, ToIndex);
}

