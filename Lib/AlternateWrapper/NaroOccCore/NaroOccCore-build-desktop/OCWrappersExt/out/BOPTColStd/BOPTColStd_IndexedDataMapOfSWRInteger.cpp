// File generated by CPPExt (CPP file)
//

#include "BOPTColStd_IndexedDataMapOfSWRInteger.h"
#include "../Converter.h"
#include "BOPTColStd_ShapeWithRank.h"
#include "BOPTColStd_ShapeWithRankHasher.h"
#include "BOPTColStd_IndexedDataMapNodeOfIndexedDataMapOfSWRInteger.h"


using namespace OCNaroWrappers;

OCBOPTColStd_IndexedDataMapOfSWRInteger::OCBOPTColStd_IndexedDataMapOfSWRInteger(BOPTColStd_IndexedDataMapOfSWRInteger* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBOPTColStd_IndexedDataMapOfSWRInteger::OCBOPTColStd_IndexedDataMapOfSWRInteger(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new BOPTColStd_IndexedDataMapOfSWRInteger(NbBuckets);
}

OCBOPTColStd_IndexedDataMapOfSWRInteger^ OCBOPTColStd_IndexedDataMapOfSWRInteger::Assign(OCNaroWrappers::OCBOPTColStd_IndexedDataMapOfSWRInteger^ Other)
{
  BOPTColStd_IndexedDataMapOfSWRInteger* tmp = new BOPTColStd_IndexedDataMapOfSWRInteger(0);
  *tmp = ((BOPTColStd_IndexedDataMapOfSWRInteger*)nativeHandle)->Assign(*((BOPTColStd_IndexedDataMapOfSWRInteger*)Other->Handle));
  return gcnew OCBOPTColStd_IndexedDataMapOfSWRInteger(tmp);
}

 void OCBOPTColStd_IndexedDataMapOfSWRInteger::ReSize(Standard_Integer NbBuckets)
{
  ((BOPTColStd_IndexedDataMapOfSWRInteger*)nativeHandle)->ReSize(NbBuckets);
}

 Standard_Integer OCBOPTColStd_IndexedDataMapOfSWRInteger::Add(OCNaroWrappers::OCBOPTColStd_ShapeWithRank^ K, Standard_Integer I)
{
  return ((BOPTColStd_IndexedDataMapOfSWRInteger*)nativeHandle)->Add(*((BOPTColStd_ShapeWithRank*)K->Handle), I);
}

 void OCBOPTColStd_IndexedDataMapOfSWRInteger::Substitute(Standard_Integer I, OCNaroWrappers::OCBOPTColStd_ShapeWithRank^ K, Standard_Integer T)
{
  ((BOPTColStd_IndexedDataMapOfSWRInteger*)nativeHandle)->Substitute(I, *((BOPTColStd_ShapeWithRank*)K->Handle), T);
}

 void OCBOPTColStd_IndexedDataMapOfSWRInteger::RemoveLast()
{
  ((BOPTColStd_IndexedDataMapOfSWRInteger*)nativeHandle)->RemoveLast();
}

 System::Boolean OCBOPTColStd_IndexedDataMapOfSWRInteger::Contains(OCNaroWrappers::OCBOPTColStd_ShapeWithRank^ K)
{
  return OCConverter::StandardBooleanToBoolean(((BOPTColStd_IndexedDataMapOfSWRInteger*)nativeHandle)->Contains(*((BOPTColStd_ShapeWithRank*)K->Handle)));
}

OCBOPTColStd_ShapeWithRank^ OCBOPTColStd_IndexedDataMapOfSWRInteger::FindKey(Standard_Integer I)
{
  BOPTColStd_ShapeWithRank* tmp = new BOPTColStd_ShapeWithRank();
  *tmp = ((BOPTColStd_IndexedDataMapOfSWRInteger*)nativeHandle)->FindKey(I);
  return gcnew OCBOPTColStd_ShapeWithRank(tmp);
}

 Standard_Integer OCBOPTColStd_IndexedDataMapOfSWRInteger::FindFromIndex(Standard_Integer I)
{
  return ((BOPTColStd_IndexedDataMapOfSWRInteger*)nativeHandle)->FindFromIndex(I);
}

 Standard_Integer OCBOPTColStd_IndexedDataMapOfSWRInteger::ChangeFromIndex(Standard_Integer I)
{
  return ((BOPTColStd_IndexedDataMapOfSWRInteger*)nativeHandle)->ChangeFromIndex(I);
}

 Standard_Integer OCBOPTColStd_IndexedDataMapOfSWRInteger::FindIndex(OCNaroWrappers::OCBOPTColStd_ShapeWithRank^ K)
{
  return ((BOPTColStd_IndexedDataMapOfSWRInteger*)nativeHandle)->FindIndex(*((BOPTColStd_ShapeWithRank*)K->Handle));
}

 Standard_Integer OCBOPTColStd_IndexedDataMapOfSWRInteger::FindFromKey(OCNaroWrappers::OCBOPTColStd_ShapeWithRank^ K)
{
  return ((BOPTColStd_IndexedDataMapOfSWRInteger*)nativeHandle)->FindFromKey(*((BOPTColStd_ShapeWithRank*)K->Handle));
}

 Standard_Integer OCBOPTColStd_IndexedDataMapOfSWRInteger::ChangeFromKey(OCNaroWrappers::OCBOPTColStd_ShapeWithRank^ K)
{
  return ((BOPTColStd_IndexedDataMapOfSWRInteger*)nativeHandle)->ChangeFromKey(*((BOPTColStd_ShapeWithRank*)K->Handle));
}

 Standard_Address OCBOPTColStd_IndexedDataMapOfSWRInteger::FindFromKey1(OCNaroWrappers::OCBOPTColStd_ShapeWithRank^ K)
{
  return ((BOPTColStd_IndexedDataMapOfSWRInteger*)nativeHandle)->FindFromKey1(*((BOPTColStd_ShapeWithRank*)K->Handle));
}

 Standard_Address OCBOPTColStd_IndexedDataMapOfSWRInteger::ChangeFromKey1(OCNaroWrappers::OCBOPTColStd_ShapeWithRank^ K)
{
  return ((BOPTColStd_IndexedDataMapOfSWRInteger*)nativeHandle)->ChangeFromKey1(*((BOPTColStd_ShapeWithRank*)K->Handle));
}


