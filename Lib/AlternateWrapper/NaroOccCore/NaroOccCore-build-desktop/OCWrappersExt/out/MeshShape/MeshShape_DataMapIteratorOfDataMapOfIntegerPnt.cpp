// File generated by CPPExt (CPP file)
//

#include "MeshShape_DataMapIteratorOfDataMapOfIntegerPnt.h"
#include "../Converter.h"
#include "../gp/gp_Pnt.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "MeshShape_DataMapOfIntegerPnt.h"
#include "MeshShape_DataMapNodeOfDataMapOfIntegerPnt.h"


using namespace OCNaroWrappers;

OCMeshShape_DataMapIteratorOfDataMapOfIntegerPnt::OCMeshShape_DataMapIteratorOfDataMapOfIntegerPnt(MeshShape_DataMapIteratorOfDataMapOfIntegerPnt* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCMeshShape_DataMapIteratorOfDataMapOfIntegerPnt::OCMeshShape_DataMapIteratorOfDataMapOfIntegerPnt() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new MeshShape_DataMapIteratorOfDataMapOfIntegerPnt();
}

OCMeshShape_DataMapIteratorOfDataMapOfIntegerPnt::OCMeshShape_DataMapIteratorOfDataMapOfIntegerPnt(OCNaroWrappers::OCMeshShape_DataMapOfIntegerPnt^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new MeshShape_DataMapIteratorOfDataMapOfIntegerPnt(*((MeshShape_DataMapOfIntegerPnt*)aMap->Handle));
}

 void OCMeshShape_DataMapIteratorOfDataMapOfIntegerPnt::Initialize(OCNaroWrappers::OCMeshShape_DataMapOfIntegerPnt^ aMap)
{
  ((MeshShape_DataMapIteratorOfDataMapOfIntegerPnt*)nativeHandle)->Initialize(*((MeshShape_DataMapOfIntegerPnt*)aMap->Handle));
}

 Standard_Integer OCMeshShape_DataMapIteratorOfDataMapOfIntegerPnt::Key()
{
  return ((MeshShape_DataMapIteratorOfDataMapOfIntegerPnt*)nativeHandle)->Key();
}

OCgp_Pnt^ OCMeshShape_DataMapIteratorOfDataMapOfIntegerPnt::Value()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((MeshShape_DataMapIteratorOfDataMapOfIntegerPnt*)nativeHandle)->Value();
  return gcnew OCgp_Pnt(tmp);
}

