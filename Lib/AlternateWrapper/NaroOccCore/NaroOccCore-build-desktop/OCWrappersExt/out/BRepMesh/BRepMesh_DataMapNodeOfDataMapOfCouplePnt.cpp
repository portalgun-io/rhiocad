// File generated by CPPExt (CPP file)
//

#include "BRepMesh_DataMapNodeOfDataMapOfCouplePnt.h"
#include "../Converter.h"
#include "../MeshShape/MeshShape_Couple.h"
#include "../gp/gp_Pnt.h"
#include "../MeshShape/MeshShape_CoupleHasher.h"
#include "BRepMesh_DataMapOfCouplePnt.h"
#include "BRepMesh_DataMapIteratorOfDataMapOfCouplePnt.h"


using namespace OCNaroWrappers;

OCBRepMesh_DataMapNodeOfDataMapOfCouplePnt::OCBRepMesh_DataMapNodeOfDataMapOfCouplePnt(Handle(BRepMesh_DataMapNodeOfDataMapOfCouplePnt)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BRepMesh_DataMapNodeOfDataMapOfCouplePnt(*nativeHandle);
}

OCBRepMesh_DataMapNodeOfDataMapOfCouplePnt::OCBRepMesh_DataMapNodeOfDataMapOfCouplePnt(OCNaroWrappers::OCMeshShape_Couple^ K, OCNaroWrappers::OCgp_Pnt^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BRepMesh_DataMapNodeOfDataMapOfCouplePnt(new BRepMesh_DataMapNodeOfDataMapOfCouplePnt(*((MeshShape_Couple*)K->Handle), *((gp_Pnt*)I->Handle), n));
}

OCMeshShape_Couple^ OCBRepMesh_DataMapNodeOfDataMapOfCouplePnt::Key()
{
  MeshShape_Couple* tmp = new MeshShape_Couple();
  *tmp = (*((Handle_BRepMesh_DataMapNodeOfDataMapOfCouplePnt*)nativeHandle))->Key();
  return gcnew OCMeshShape_Couple(tmp);
}

OCgp_Pnt^ OCBRepMesh_DataMapNodeOfDataMapOfCouplePnt::Value()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = (*((Handle_BRepMesh_DataMapNodeOfDataMapOfCouplePnt*)nativeHandle))->Value();
  return gcnew OCgp_Pnt(tmp);
}

