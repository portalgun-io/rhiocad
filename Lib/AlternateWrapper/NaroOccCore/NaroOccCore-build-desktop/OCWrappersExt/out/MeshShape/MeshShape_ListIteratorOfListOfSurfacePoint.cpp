// File generated by CPPExt (CPP file)
//

#include "MeshShape_ListIteratorOfListOfSurfacePoint.h"
#include "../Converter.h"
#include "MeshShape_ListOfSurfacePoint.h"
#include "MeshShape_SurfacePoint.h"
#include "MeshShape_ListNodeOfListOfSurfacePoint.h"


using namespace OCNaroWrappers;

OCMeshShape_ListIteratorOfListOfSurfacePoint::OCMeshShape_ListIteratorOfListOfSurfacePoint(MeshShape_ListIteratorOfListOfSurfacePoint* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCMeshShape_ListIteratorOfListOfSurfacePoint::OCMeshShape_ListIteratorOfListOfSurfacePoint() 
{
  nativeHandle = new MeshShape_ListIteratorOfListOfSurfacePoint();
}

OCMeshShape_ListIteratorOfListOfSurfacePoint::OCMeshShape_ListIteratorOfListOfSurfacePoint(OCNaroWrappers::OCMeshShape_ListOfSurfacePoint^ L) 
{
  nativeHandle = new MeshShape_ListIteratorOfListOfSurfacePoint(*((MeshShape_ListOfSurfacePoint*)L->Handle));
}

 void OCMeshShape_ListIteratorOfListOfSurfacePoint::Initialize(OCNaroWrappers::OCMeshShape_ListOfSurfacePoint^ L)
{
  ((MeshShape_ListIteratorOfListOfSurfacePoint*)nativeHandle)->Initialize(*((MeshShape_ListOfSurfacePoint*)L->Handle));
}

 System::Boolean OCMeshShape_ListIteratorOfListOfSurfacePoint::More()
{
  return OCConverter::StandardBooleanToBoolean(((MeshShape_ListIteratorOfListOfSurfacePoint*)nativeHandle)->More());
}

 void OCMeshShape_ListIteratorOfListOfSurfacePoint::Next()
{
  ((MeshShape_ListIteratorOfListOfSurfacePoint*)nativeHandle)->Next();
}

OCMeshShape_SurfacePoint^ OCMeshShape_ListIteratorOfListOfSurfacePoint::Value()
{
  MeshShape_SurfacePoint* tmp = new MeshShape_SurfacePoint();
  *tmp = ((MeshShape_ListIteratorOfListOfSurfacePoint*)nativeHandle)->Value();
  return gcnew OCMeshShape_SurfacePoint(tmp);
}

