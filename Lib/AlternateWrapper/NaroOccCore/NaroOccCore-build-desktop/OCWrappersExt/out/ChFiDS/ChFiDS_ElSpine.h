// File generated by CPPExt (MPV)
//
#ifndef _ChFiDS_ElSpine_OCWrappers_HeaderFile
#define _ChFiDS_ElSpine_OCWrappers_HeaderFile

// include native header
#include <ChFiDS_ElSpine.hxx>
#include "../Converter.h"

#include "../Adaptor3d/Adaptor3d_Curve.h"

#include "../GeomAdaptor/GeomAdaptor_Curve.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Vec.h"
#include "../Adaptor3d/Adaptor3d_Curve.h"
#include "../GeomAbs/GeomAbs_Shape.h"
#include "../GeomAbs/GeomAbs_CurveType.h"


namespace OCNaroWrappers
{

ref class OCChFiDS_SurfData;
ref class OCTColStd_Array1OfReal;
ref class OCAdaptor3d_HCurve;
ref class OCgp_Pnt;
ref class OCgp_Vec;
ref class OCGeom_Curve;
ref class OCgp_Lin;
ref class OCgp_Circ;
ref class OCgp_Elips;
ref class OCgp_Hypr;
ref class OCgp_Parab;
ref class OCGeom_BezierCurve;
ref class OCGeom_BSplineCurve;


//! Elementary  Spine for cheminements and approximations. <br>
public ref class OCChFiDS_ElSpine  : public OCAdaptor3d_Curve {

protected:
  // dummy constructor;
  OCChFiDS_ElSpine(OCDummy^) : OCAdaptor3d_Curve((OCDummy^)nullptr) {};

public:

// constructor from native
OCChFiDS_ElSpine(ChFiDS_ElSpine* nativeHandle);

// Methods PUBLIC


OCChFiDS_ElSpine();


virtual /*instead*/  Standard_Real FirstParameter() override;


virtual /*instead*/  Standard_Real LastParameter() override;


virtual /*instead*/  OCGeomAbs_Shape Continuity() override;


virtual /*instead*/  Standard_Integer NbIntervals(OCGeomAbs_Shape S) override;


virtual /*instead*/  void Intervals(OCNaroWrappers::OCTColStd_Array1OfReal^ T, OCGeomAbs_Shape S) override;

//! Returns    a  curve equivalent   of  <me>  between <br>
//!          parameters <First>  and <Last>. <Tol>  is used  to <br>
//!          test for 3d points confusion. <br>
virtual /*instead*/  OCAdaptor3d_HCurve^ Trim(Standard_Real First, Standard_Real Last, Standard_Real Tol) override;


virtual /*instead*/  Standard_Real Resolution(Standard_Real R3d) override;


virtual /*instead*/  OCGeomAbs_CurveType GetType() override;


virtual /*instead*/  System::Boolean IsPeriodic() override;


 /*instead*/  void SetPeriodic(System::Boolean I) ;


virtual /*instead*/  Standard_Real Period() override;


virtual /*instead*/  OCgp_Pnt^ Value(Standard_Real AbsC) override;


virtual /*instead*/  void D0(Standard_Real AbsC, OCNaroWrappers::OCgp_Pnt^ P) override;


virtual /*instead*/  void D1(Standard_Real AbsC, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V1) override;


virtual /*instead*/  void D2(Standard_Real AbsC, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V1, OCNaroWrappers::OCgp_Vec^ V2) override;


virtual /*instead*/  void D3(Standard_Real AbsC, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V1, OCNaroWrappers::OCgp_Vec^ V2, OCNaroWrappers::OCgp_Vec^ V3) override;


 /*instead*/  void FirstParameter(Standard_Real P) ;


 /*instead*/  void LastParameter(Standard_Real P) ;


 /*instead*/  void SetOrigin(Standard_Real O) ;


 /*instead*/  void FirstPointAndTgt(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ T) ;


 /*instead*/  void LastPointAndTgt(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ T) ;


 /*instead*/  void SetFirstPointAndTgt(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ T) ;


 /*instead*/  void SetLastPointAndTgt(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ T) ;


 /*instead*/  void SetCurve(OCNaroWrappers::OCGeom_Curve^ C) ;


 /*instead*/  OCChFiDS_SurfData^ Previous() ;


 /*instead*/  OCChFiDS_SurfData^ ChangePrevious() ;


 /*instead*/  OCChFiDS_SurfData^ Next() ;


 /*instead*/  OCChFiDS_SurfData^ ChangeNext() ;


virtual /*instead*/  OCgp_Lin^ Line() override;


virtual /*instead*/  OCgp_Circ^ Circle() override;


virtual /*instead*/  OCgp_Elips^ Ellipse() override;


virtual /*instead*/  OCgp_Hypr^ Hyperbola() override;


virtual /*instead*/  OCgp_Parab^ Parabola() override;


virtual /*instead*/  OCGeom_BezierCurve^ Bezier() override;


virtual /*instead*/  OCGeom_BSplineCurve^ BSpline() override;

~OCChFiDS_ElSpine()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif