// File generated by CPPExt (CPP file)
//

#include "Bnd_HArray1OfSphere.h"
#include "../Converter.h"
#include "Bnd_Sphere.h"
#include "Bnd_Array1OfSphere.h"


using namespace OCNaroWrappers;

OCBnd_HArray1OfSphere::OCBnd_HArray1OfSphere(Handle(Bnd_HArray1OfSphere)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Bnd_HArray1OfSphere(*nativeHandle);
}

OCBnd_HArray1OfSphere::OCBnd_HArray1OfSphere(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Bnd_HArray1OfSphere(new Bnd_HArray1OfSphere(Low, Up));
}

OCBnd_HArray1OfSphere::OCBnd_HArray1OfSphere(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCBnd_Sphere^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Bnd_HArray1OfSphere(new Bnd_HArray1OfSphere(Low, Up, *((Bnd_Sphere*)V->Handle)));
}

 void OCBnd_HArray1OfSphere::Init(OCNaroWrappers::OCBnd_Sphere^ V)
{
  (*((Handle_Bnd_HArray1OfSphere*)nativeHandle))->Init(*((Bnd_Sphere*)V->Handle));
}

 Standard_Integer OCBnd_HArray1OfSphere::Length()
{
  return (*((Handle_Bnd_HArray1OfSphere*)nativeHandle))->Length();
}

 Standard_Integer OCBnd_HArray1OfSphere::Lower()
{
  return (*((Handle_Bnd_HArray1OfSphere*)nativeHandle))->Lower();
}

 Standard_Integer OCBnd_HArray1OfSphere::Upper()
{
  return (*((Handle_Bnd_HArray1OfSphere*)nativeHandle))->Upper();
}

 void OCBnd_HArray1OfSphere::SetValue(Standard_Integer Index, OCNaroWrappers::OCBnd_Sphere^ Value)
{
  (*((Handle_Bnd_HArray1OfSphere*)nativeHandle))->SetValue(Index, *((Bnd_Sphere*)Value->Handle));
}

OCBnd_Sphere^ OCBnd_HArray1OfSphere::Value(Standard_Integer Index)
{
  Bnd_Sphere* tmp = new Bnd_Sphere();
  *tmp = (*((Handle_Bnd_HArray1OfSphere*)nativeHandle))->Value(Index);
  return gcnew OCBnd_Sphere(tmp);
}

OCBnd_Sphere^ OCBnd_HArray1OfSphere::ChangeValue(Standard_Integer Index)
{
  Bnd_Sphere* tmp = new Bnd_Sphere();
  *tmp = (*((Handle_Bnd_HArray1OfSphere*)nativeHandle))->ChangeValue(Index);
  return gcnew OCBnd_Sphere(tmp);
}

OCBnd_Array1OfSphere^ OCBnd_HArray1OfSphere::Array1()
{
  Bnd_Array1OfSphere* tmp = new Bnd_Array1OfSphere(0, 0);
  *tmp = (*((Handle_Bnd_HArray1OfSphere*)nativeHandle))->Array1();
  return gcnew OCBnd_Array1OfSphere(tmp);
}

OCBnd_Array1OfSphere^ OCBnd_HArray1OfSphere::ChangeArray1()
{
  Bnd_Array1OfSphere* tmp = new Bnd_Array1OfSphere(0, 0);
  *tmp = (*((Handle_Bnd_HArray1OfSphere*)nativeHandle))->ChangeArray1();
  return gcnew OCBnd_Array1OfSphere(tmp);
}

