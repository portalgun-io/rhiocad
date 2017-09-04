// File generated by CPPExt (CPP file)
//

#include "ChFiDS_Stripe.h"
#include "../Converter.h"
#include "ChFiDS_Spine.h"
#include "ChFiDS_HData.h"
#include "../Geom2d/Geom2d_Curve.h"


using namespace OCNaroWrappers;

OCChFiDS_Stripe::OCChFiDS_Stripe(Handle(ChFiDS_Stripe)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_ChFiDS_Stripe(*nativeHandle);
}

OCChFiDS_Stripe::OCChFiDS_Stripe() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_ChFiDS_Stripe(new ChFiDS_Stripe());
}

 void OCChFiDS_Stripe::Reset()
{
  (*((Handle_ChFiDS_Stripe*)nativeHandle))->Reset();
}

OCChFiDS_HData^ OCChFiDS_Stripe::SetOfSurfData()
{
  Handle(ChFiDS_HData) tmp = (*((Handle_ChFiDS_Stripe*)nativeHandle))->SetOfSurfData();
  return gcnew OCChFiDS_HData(&tmp);
}

OCChFiDS_Spine^ OCChFiDS_Stripe::Spine()
{
  Handle(ChFiDS_Spine) tmp = (*((Handle_ChFiDS_Stripe*)nativeHandle))->Spine();
  return gcnew OCChFiDS_Spine(&tmp);
}

 OCTopAbs_Orientation OCChFiDS_Stripe::OrientationOnFace1()
{
  return (OCTopAbs_Orientation)((*((Handle_ChFiDS_Stripe*)nativeHandle))->OrientationOnFace1());
}

 OCTopAbs_Orientation OCChFiDS_Stripe::OrientationOnFace2()
{
  return (OCTopAbs_Orientation)((*((Handle_ChFiDS_Stripe*)nativeHandle))->OrientationOnFace2());
}

 Standard_Integer OCChFiDS_Stripe::Choix()
{
  return (*((Handle_ChFiDS_Stripe*)nativeHandle))->Choix();
}

OCChFiDS_HData^ OCChFiDS_Stripe::ChangeSetOfSurfData()
{
  Handle(ChFiDS_HData) tmp = (*((Handle_ChFiDS_Stripe*)nativeHandle))->ChangeSetOfSurfData();
  return gcnew OCChFiDS_HData(&tmp);
}

OCChFiDS_Spine^ OCChFiDS_Stripe::ChangeSpine()
{
  Handle(ChFiDS_Spine) tmp = (*((Handle_ChFiDS_Stripe*)nativeHandle))->ChangeSpine();
  return gcnew OCChFiDS_Spine(&tmp);
}

 void OCChFiDS_Stripe::OrientationOnFace1(OCTopAbs_Orientation Or1)
{
  (*((Handle_ChFiDS_Stripe*)nativeHandle))->OrientationOnFace1((TopAbs_Orientation)Or1);
}

 void OCChFiDS_Stripe::OrientationOnFace2(OCTopAbs_Orientation Or2)
{
  (*((Handle_ChFiDS_Stripe*)nativeHandle))->OrientationOnFace2((TopAbs_Orientation)Or2);
}

 void OCChFiDS_Stripe::Choix(Standard_Integer C)
{
  (*((Handle_ChFiDS_Stripe*)nativeHandle))->Choix(C);
}

 void OCChFiDS_Stripe::FirstParameters(Standard_Real& Pdeb, Standard_Real& Pfin)
{
  (*((Handle_ChFiDS_Stripe*)nativeHandle))->FirstParameters(Pdeb, Pfin);
}

 void OCChFiDS_Stripe::LastParameters(Standard_Real& Pdeb, Standard_Real& Pfin)
{
  (*((Handle_ChFiDS_Stripe*)nativeHandle))->LastParameters(Pdeb, Pfin);
}

 void OCChFiDS_Stripe::ChangeFirstParameters(Standard_Real Pdeb, Standard_Real Pfin)
{
  (*((Handle_ChFiDS_Stripe*)nativeHandle))->ChangeFirstParameters(Pdeb, Pfin);
}

 void OCChFiDS_Stripe::ChangeLastParameters(Standard_Real Pdeb, Standard_Real Pfin)
{
  (*((Handle_ChFiDS_Stripe*)nativeHandle))->ChangeLastParameters(Pdeb, Pfin);
}

 Standard_Integer OCChFiDS_Stripe::FirstCurve()
{
  return (*((Handle_ChFiDS_Stripe*)nativeHandle))->FirstCurve();
}

 Standard_Integer OCChFiDS_Stripe::LastCurve()
{
  return (*((Handle_ChFiDS_Stripe*)nativeHandle))->LastCurve();
}

 void OCChFiDS_Stripe::ChangeFirstCurve(Standard_Integer Index)
{
  (*((Handle_ChFiDS_Stripe*)nativeHandle))->ChangeFirstCurve(Index);
}

 void OCChFiDS_Stripe::ChangeLastCurve(Standard_Integer Index)
{
  (*((Handle_ChFiDS_Stripe*)nativeHandle))->ChangeLastCurve(Index);
}

OCGeom2d_Curve^ OCChFiDS_Stripe::FirstPCurve()
{
  Handle(Geom2d_Curve) tmp = (*((Handle_ChFiDS_Stripe*)nativeHandle))->FirstPCurve();
  return gcnew OCGeom2d_Curve(&tmp);
}

OCGeom2d_Curve^ OCChFiDS_Stripe::LastPCurve()
{
  Handle(Geom2d_Curve) tmp = (*((Handle_ChFiDS_Stripe*)nativeHandle))->LastPCurve();
  return gcnew OCGeom2d_Curve(&tmp);
}

OCGeom2d_Curve^ OCChFiDS_Stripe::ChangeFirstPCurve()
{
  Handle(Geom2d_Curve) tmp = (*((Handle_ChFiDS_Stripe*)nativeHandle))->ChangeFirstPCurve();
  return gcnew OCGeom2d_Curve(&tmp);
}

OCGeom2d_Curve^ OCChFiDS_Stripe::ChangeLastPCurve()
{
  Handle(Geom2d_Curve) tmp = (*((Handle_ChFiDS_Stripe*)nativeHandle))->ChangeLastPCurve();
  return gcnew OCGeom2d_Curve(&tmp);
}

 OCTopAbs_Orientation OCChFiDS_Stripe::FirstPCurveOrientation()
{
  return (OCTopAbs_Orientation)((*((Handle_ChFiDS_Stripe*)nativeHandle))->FirstPCurveOrientation());
}

 OCTopAbs_Orientation OCChFiDS_Stripe::LastPCurveOrientation()
{
  return (OCTopAbs_Orientation)((*((Handle_ChFiDS_Stripe*)nativeHandle))->LastPCurveOrientation());
}

 void OCChFiDS_Stripe::FirstPCurveOrientation(OCTopAbs_Orientation O)
{
  (*((Handle_ChFiDS_Stripe*)nativeHandle))->FirstPCurveOrientation((TopAbs_Orientation)O);
}

 void OCChFiDS_Stripe::LastPCurveOrientation(OCTopAbs_Orientation O)
{
  (*((Handle_ChFiDS_Stripe*)nativeHandle))->LastPCurveOrientation((TopAbs_Orientation)O);
}

 Standard_Integer OCChFiDS_Stripe::IndexFirstPointOnS1()
{
  return (*((Handle_ChFiDS_Stripe*)nativeHandle))->IndexFirstPointOnS1();
}

 Standard_Integer OCChFiDS_Stripe::IndexFirstPointOnS2()
{
  return (*((Handle_ChFiDS_Stripe*)nativeHandle))->IndexFirstPointOnS2();
}

 Standard_Integer OCChFiDS_Stripe::IndexLastPointOnS1()
{
  return (*((Handle_ChFiDS_Stripe*)nativeHandle))->IndexLastPointOnS1();
}

 Standard_Integer OCChFiDS_Stripe::IndexLastPointOnS2()
{
  return (*((Handle_ChFiDS_Stripe*)nativeHandle))->IndexLastPointOnS2();
}

 void OCChFiDS_Stripe::ChangeIndexFirstPointOnS1(Standard_Integer Index)
{
  (*((Handle_ChFiDS_Stripe*)nativeHandle))->ChangeIndexFirstPointOnS1(Index);
}

 void OCChFiDS_Stripe::ChangeIndexFirstPointOnS2(Standard_Integer Index)
{
  (*((Handle_ChFiDS_Stripe*)nativeHandle))->ChangeIndexFirstPointOnS2(Index);
}

 void OCChFiDS_Stripe::ChangeIndexLastPointOnS1(Standard_Integer Index)
{
  (*((Handle_ChFiDS_Stripe*)nativeHandle))->ChangeIndexLastPointOnS1(Index);
}

 void OCChFiDS_Stripe::ChangeIndexLastPointOnS2(Standard_Integer Index)
{
  (*((Handle_ChFiDS_Stripe*)nativeHandle))->ChangeIndexLastPointOnS2(Index);
}

 void OCChFiDS_Stripe::Parameters(System::Boolean First, Standard_Real& Pdeb, Standard_Real& Pfin)
{
  (*((Handle_ChFiDS_Stripe*)nativeHandle))->Parameters(OCConverter::BooleanToStandardBoolean(First), Pdeb, Pfin);
}

 void OCChFiDS_Stripe::SetParameters(System::Boolean First, Standard_Real Pdeb, Standard_Real Pfin)
{
  (*((Handle_ChFiDS_Stripe*)nativeHandle))->SetParameters(OCConverter::BooleanToStandardBoolean(First), Pdeb, Pfin);
}

 Standard_Integer OCChFiDS_Stripe::Curve(System::Boolean First)
{
  return (*((Handle_ChFiDS_Stripe*)nativeHandle))->Curve(OCConverter::BooleanToStandardBoolean(First));
}

 void OCChFiDS_Stripe::SetCurve(Standard_Integer Index, System::Boolean First)
{
  (*((Handle_ChFiDS_Stripe*)nativeHandle))->SetCurve(Index, OCConverter::BooleanToStandardBoolean(First));
}

OCGeom2d_Curve^ OCChFiDS_Stripe::PCurve(System::Boolean First)
{
  Handle(Geom2d_Curve) tmp = (*((Handle_ChFiDS_Stripe*)nativeHandle))->PCurve(OCConverter::BooleanToStandardBoolean(First));
  return gcnew OCGeom2d_Curve(&tmp);
}

OCGeom2d_Curve^ OCChFiDS_Stripe::ChangePCurve(System::Boolean First)
{
  Handle(Geom2d_Curve) tmp = (*((Handle_ChFiDS_Stripe*)nativeHandle))->ChangePCurve(OCConverter::BooleanToStandardBoolean(First));
  return gcnew OCGeom2d_Curve(&tmp);
}

 OCTopAbs_Orientation OCChFiDS_Stripe::Orientation(Standard_Integer OnS)
{
  return (OCTopAbs_Orientation)((*((Handle_ChFiDS_Stripe*)nativeHandle))->Orientation(OnS));
}

 void OCChFiDS_Stripe::SetOrientation(OCTopAbs_Orientation Or, Standard_Integer OnS)
{
  (*((Handle_ChFiDS_Stripe*)nativeHandle))->SetOrientation((TopAbs_Orientation)Or, OnS);
}

 OCTopAbs_Orientation OCChFiDS_Stripe::Orientation(System::Boolean First)
{
  return (OCTopAbs_Orientation)((*((Handle_ChFiDS_Stripe*)nativeHandle))->Orientation(OCConverter::BooleanToStandardBoolean(First)));
}

 void OCChFiDS_Stripe::SetOrientation(OCTopAbs_Orientation Or, System::Boolean First)
{
  (*((Handle_ChFiDS_Stripe*)nativeHandle))->SetOrientation((TopAbs_Orientation)Or, OCConverter::BooleanToStandardBoolean(First));
}

 Standard_Integer OCChFiDS_Stripe::IndexPoint(System::Boolean First, Standard_Integer OnS)
{
  return (*((Handle_ChFiDS_Stripe*)nativeHandle))->IndexPoint(OCConverter::BooleanToStandardBoolean(First), OnS);
}

 void OCChFiDS_Stripe::SetIndexPoint(Standard_Integer Index, System::Boolean First, Standard_Integer OnS)
{
  (*((Handle_ChFiDS_Stripe*)nativeHandle))->SetIndexPoint(Index, OCConverter::BooleanToStandardBoolean(First), OnS);
}

 Standard_Integer OCChFiDS_Stripe::SolidIndex()
{
  return (*((Handle_ChFiDS_Stripe*)nativeHandle))->SolidIndex();
}

 void OCChFiDS_Stripe::SetSolidIndex(Standard_Integer Index)
{
  (*((Handle_ChFiDS_Stripe*)nativeHandle))->SetSolidIndex(Index);
}

 void OCChFiDS_Stripe::InDS(System::Boolean First, Standard_Integer Nb)
{
  (*((Handle_ChFiDS_Stripe*)nativeHandle))->InDS(OCConverter::BooleanToStandardBoolean(First), Nb);
}

 Standard_Integer OCChFiDS_Stripe::IsInDS(System::Boolean First)
{
  return (*((Handle_ChFiDS_Stripe*)nativeHandle))->IsInDS(OCConverter::BooleanToStandardBoolean(First));
}

