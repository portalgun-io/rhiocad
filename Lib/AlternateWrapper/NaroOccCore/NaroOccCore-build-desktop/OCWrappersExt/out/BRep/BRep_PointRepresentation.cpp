// File generated by CPPExt (CPP file)
//

#include "BRep_PointRepresentation.h"
#include "../Converter.h"
#include "../TopLoc/TopLoc_Location.h"
#include "../Geom/Geom_Curve.h"
#include "../Geom2d/Geom2d_Curve.h"
#include "../Geom/Geom_Surface.h"


using namespace OCNaroWrappers;

OCBRep_PointRepresentation::OCBRep_PointRepresentation(Handle(BRep_PointRepresentation)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BRep_PointRepresentation(*nativeHandle);
}

OCBRep_PointRepresentation::OCBRep_PointRepresentation(Standard_Real P, OCNaroWrappers::OCTopLoc_Location^ L) : OCMMgt_TShared((OCDummy^)nullptr)

{}

 System::Boolean OCBRep_PointRepresentation::IsPointOnCurve()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_BRep_PointRepresentation*)nativeHandle))->IsPointOnCurve());
}

 System::Boolean OCBRep_PointRepresentation::IsPointOnCurveOnSurface()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_BRep_PointRepresentation*)nativeHandle))->IsPointOnCurveOnSurface());
}

 System::Boolean OCBRep_PointRepresentation::IsPointOnSurface()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_BRep_PointRepresentation*)nativeHandle))->IsPointOnSurface());
}

 System::Boolean OCBRep_PointRepresentation::IsPointOnCurve(OCNaroWrappers::OCGeom_Curve^ C, OCNaroWrappers::OCTopLoc_Location^ L)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_BRep_PointRepresentation*)nativeHandle))->IsPointOnCurve(*((Handle_Geom_Curve*)C->Handle), *((TopLoc_Location*)L->Handle)));
}

 System::Boolean OCBRep_PointRepresentation::IsPointOnCurveOnSurface(OCNaroWrappers::OCGeom2d_Curve^ PC, OCNaroWrappers::OCGeom_Surface^ S, OCNaroWrappers::OCTopLoc_Location^ L)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_BRep_PointRepresentation*)nativeHandle))->IsPointOnCurveOnSurface(*((Handle_Geom2d_Curve*)PC->Handle), *((Handle_Geom_Surface*)S->Handle), *((TopLoc_Location*)L->Handle)));
}

 System::Boolean OCBRep_PointRepresentation::IsPointOnSurface(OCNaroWrappers::OCGeom_Surface^ S, OCNaroWrappers::OCTopLoc_Location^ L)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_BRep_PointRepresentation*)nativeHandle))->IsPointOnSurface(*((Handle_Geom_Surface*)S->Handle), *((TopLoc_Location*)L->Handle)));
}

OCTopLoc_Location^ OCBRep_PointRepresentation::Location()
{
  TopLoc_Location* tmp = new TopLoc_Location();
  *tmp = (*((Handle_BRep_PointRepresentation*)nativeHandle))->Location();
  return gcnew OCTopLoc_Location(tmp);
}

 void OCBRep_PointRepresentation::Location(OCNaroWrappers::OCTopLoc_Location^ L)
{
  (*((Handle_BRep_PointRepresentation*)nativeHandle))->Location(*((TopLoc_Location*)L->Handle));
}

 Standard_Real OCBRep_PointRepresentation::Parameter()
{
  return (*((Handle_BRep_PointRepresentation*)nativeHandle))->Parameter();
}

 void OCBRep_PointRepresentation::Parameter(Standard_Real P)
{
  (*((Handle_BRep_PointRepresentation*)nativeHandle))->Parameter(P);
}

 Standard_Real OCBRep_PointRepresentation::Parameter2()
{
  return (*((Handle_BRep_PointRepresentation*)nativeHandle))->Parameter2();
}

 void OCBRep_PointRepresentation::Parameter2(Standard_Real P)
{
  (*((Handle_BRep_PointRepresentation*)nativeHandle))->Parameter2(P);
}

OCGeom_Curve^ OCBRep_PointRepresentation::Curve()
{
  Handle(Geom_Curve) tmp = (*((Handle_BRep_PointRepresentation*)nativeHandle))->Curve();
  return gcnew OCGeom_Curve(&tmp);
}

 void OCBRep_PointRepresentation::Curve(OCNaroWrappers::OCGeom_Curve^ C)
{
  (*((Handle_BRep_PointRepresentation*)nativeHandle))->Curve(*((Handle_Geom_Curve*)C->Handle));
}

OCGeom2d_Curve^ OCBRep_PointRepresentation::PCurve()
{
  Handle(Geom2d_Curve) tmp = (*((Handle_BRep_PointRepresentation*)nativeHandle))->PCurve();
  return gcnew OCGeom2d_Curve(&tmp);
}

 void OCBRep_PointRepresentation::PCurve(OCNaroWrappers::OCGeom2d_Curve^ C)
{
  (*((Handle_BRep_PointRepresentation*)nativeHandle))->PCurve(*((Handle_Geom2d_Curve*)C->Handle));
}

OCGeom_Surface^ OCBRep_PointRepresentation::Surface()
{
  Handle(Geom_Surface) tmp = (*((Handle_BRep_PointRepresentation*)nativeHandle))->Surface();
  return gcnew OCGeom_Surface(&tmp);
}

 void OCBRep_PointRepresentation::Surface(OCNaroWrappers::OCGeom_Surface^ S)
{
  (*((Handle_BRep_PointRepresentation*)nativeHandle))->Surface(*((Handle_Geom_Surface*)S->Handle));
}

