// File generated by CPPExt (CPP file)
//

#include "Geom_CylindricalSurface.h"
#include "../Converter.h"
#include "../gp/gp_Ax3.h"
#include "../gp/gp_Cylinder.h"
#include "../gp/gp_Trsf.h"
#include "../gp/gp_GTrsf2d.h"
#include "Geom_Curve.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Vec.h"
#include "Geom_Geometry.h"


using namespace OCNaroWrappers;

OCGeom_CylindricalSurface::OCGeom_CylindricalSurface(Handle(Geom_CylindricalSurface)* nativeHandle) : OCGeom_ElementarySurface((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Geom_CylindricalSurface(*nativeHandle);
}

OCGeom_CylindricalSurface::OCGeom_CylindricalSurface(OCNaroWrappers::OCgp_Ax3^ A3, Standard_Real Radius) : OCGeom_ElementarySurface((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Geom_CylindricalSurface(new Geom_CylindricalSurface(*((gp_Ax3*)A3->Handle), Radius));
}

OCGeom_CylindricalSurface::OCGeom_CylindricalSurface(OCNaroWrappers::OCgp_Cylinder^ C) : OCGeom_ElementarySurface((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Geom_CylindricalSurface(new Geom_CylindricalSurface(*((gp_Cylinder*)C->Handle)));
}

 void OCGeom_CylindricalSurface::SetCylinder(OCNaroWrappers::OCgp_Cylinder^ C)
{
  (*((Handle_Geom_CylindricalSurface*)nativeHandle))->SetCylinder(*((gp_Cylinder*)C->Handle));
}

 void OCGeom_CylindricalSurface::SetRadius(Standard_Real R)
{
  (*((Handle_Geom_CylindricalSurface*)nativeHandle))->SetRadius(R);
}

OCgp_Cylinder^ OCGeom_CylindricalSurface::Cylinder()
{
  gp_Cylinder* tmp = new gp_Cylinder();
  *tmp = (*((Handle_Geom_CylindricalSurface*)nativeHandle))->Cylinder();
  return gcnew OCgp_Cylinder(tmp);
}

 Standard_Real OCGeom_CylindricalSurface::UReversedParameter(Standard_Real U)
{
  return (*((Handle_Geom_CylindricalSurface*)nativeHandle))->UReversedParameter(U);
}

 Standard_Real OCGeom_CylindricalSurface::VReversedParameter(Standard_Real V)
{
  return (*((Handle_Geom_CylindricalSurface*)nativeHandle))->VReversedParameter(V);
}

 void OCGeom_CylindricalSurface::TransformParameters(Standard_Real& U, Standard_Real& V, OCNaroWrappers::OCgp_Trsf^ T)
{
  (*((Handle_Geom_CylindricalSurface*)nativeHandle))->TransformParameters(U, V, *((gp_Trsf*)T->Handle));
}

OCgp_GTrsf2d^ OCGeom_CylindricalSurface::ParametricTransformation(OCNaroWrappers::OCgp_Trsf^ T)
{
  gp_GTrsf2d* tmp = new gp_GTrsf2d();
  *tmp = (*((Handle_Geom_CylindricalSurface*)nativeHandle))->ParametricTransformation(*((gp_Trsf*)T->Handle));
  return gcnew OCgp_GTrsf2d(tmp);
}

 void OCGeom_CylindricalSurface::Bounds(Standard_Real& U1, Standard_Real& U2, Standard_Real& V1, Standard_Real& V2)
{
  (*((Handle_Geom_CylindricalSurface*)nativeHandle))->Bounds(U1, U2, V1, V2);
}

 void OCGeom_CylindricalSurface::Coefficients(Standard_Real& A1, Standard_Real& A2, Standard_Real& A3, Standard_Real& B1, Standard_Real& B2, Standard_Real& B3, Standard_Real& C1, Standard_Real& C2, Standard_Real& C3, Standard_Real& D)
{
  (*((Handle_Geom_CylindricalSurface*)nativeHandle))->Coefficients(A1, A2, A3, B1, B2, B3, C1, C2, C3, D);
}

 Standard_Real OCGeom_CylindricalSurface::Radius()
{
  return (*((Handle_Geom_CylindricalSurface*)nativeHandle))->Radius();
}

 System::Boolean OCGeom_CylindricalSurface::IsUClosed()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Geom_CylindricalSurface*)nativeHandle))->IsUClosed());
}

 System::Boolean OCGeom_CylindricalSurface::IsVClosed()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Geom_CylindricalSurface*)nativeHandle))->IsVClosed());
}

 System::Boolean OCGeom_CylindricalSurface::IsUPeriodic()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Geom_CylindricalSurface*)nativeHandle))->IsUPeriodic());
}

 System::Boolean OCGeom_CylindricalSurface::IsVPeriodic()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Geom_CylindricalSurface*)nativeHandle))->IsVPeriodic());
}

OCGeom_Curve^ OCGeom_CylindricalSurface::UIso(Standard_Real U)
{
  Handle(Geom_Curve) tmp = (*((Handle_Geom_CylindricalSurface*)nativeHandle))->UIso(U);
  return gcnew OCGeom_Curve(&tmp);
}

OCGeom_Curve^ OCGeom_CylindricalSurface::VIso(Standard_Real V)
{
  Handle(Geom_Curve) tmp = (*((Handle_Geom_CylindricalSurface*)nativeHandle))->VIso(V);
  return gcnew OCGeom_Curve(&tmp);
}

 void OCGeom_CylindricalSurface::D0(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P)
{
  (*((Handle_Geom_CylindricalSurface*)nativeHandle))->D0(U, V, *((gp_Pnt*)P->Handle));
}

 void OCGeom_CylindricalSurface::D1(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V)
{
  (*((Handle_Geom_CylindricalSurface*)nativeHandle))->D1(U, V, *((gp_Pnt*)P->Handle), *((gp_Vec*)D1U->Handle), *((gp_Vec*)D1V->Handle));
}

 void OCGeom_CylindricalSurface::D2(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V, OCNaroWrappers::OCgp_Vec^ D2U, OCNaroWrappers::OCgp_Vec^ D2V, OCNaroWrappers::OCgp_Vec^ D2UV)
{
  (*((Handle_Geom_CylindricalSurface*)nativeHandle))->D2(U, V, *((gp_Pnt*)P->Handle), *((gp_Vec*)D1U->Handle), *((gp_Vec*)D1V->Handle), *((gp_Vec*)D2U->Handle), *((gp_Vec*)D2V->Handle), *((gp_Vec*)D2UV->Handle));
}

 void OCGeom_CylindricalSurface::D3(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V, OCNaroWrappers::OCgp_Vec^ D2U, OCNaroWrappers::OCgp_Vec^ D2V, OCNaroWrappers::OCgp_Vec^ D2UV, OCNaroWrappers::OCgp_Vec^ D3U, OCNaroWrappers::OCgp_Vec^ D3V, OCNaroWrappers::OCgp_Vec^ D3UUV, OCNaroWrappers::OCgp_Vec^ D3UVV)
{
  (*((Handle_Geom_CylindricalSurface*)nativeHandle))->D3(U, V, *((gp_Pnt*)P->Handle), *((gp_Vec*)D1U->Handle), *((gp_Vec*)D1V->Handle), *((gp_Vec*)D2U->Handle), *((gp_Vec*)D2V->Handle), *((gp_Vec*)D2UV->Handle), *((gp_Vec*)D3U->Handle), *((gp_Vec*)D3V->Handle), *((gp_Vec*)D3UUV->Handle), *((gp_Vec*)D3UVV->Handle));
}

OCgp_Vec^ OCGeom_CylindricalSurface::DN(Standard_Real U, Standard_Real V, Standard_Integer Nu, Standard_Integer Nv)
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = (*((Handle_Geom_CylindricalSurface*)nativeHandle))->DN(U, V, Nu, Nv);
  return gcnew OCgp_Vec(tmp);
}

 void OCGeom_CylindricalSurface::Transform(OCNaroWrappers::OCgp_Trsf^ T)
{
  (*((Handle_Geom_CylindricalSurface*)nativeHandle))->Transform(*((gp_Trsf*)T->Handle));
}

OCGeom_Geometry^ OCGeom_CylindricalSurface::Copy()
{
  Handle(Geom_Geometry) tmp = (*((Handle_Geom_CylindricalSurface*)nativeHandle))->Copy();
  return gcnew OCGeom_Geometry(&tmp);
}

