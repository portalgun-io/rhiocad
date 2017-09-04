// File generated by CPPExt (MPV)
//
#ifndef _Adaptor2d_Curve2d_OCWrappers_HeaderFile
#define _Adaptor2d_Curve2d_OCWrappers_HeaderFile

// include native header
#include <Adaptor2d_Curve2d.hxx>
#include "../Converter.h"


#include "../GeomAbs/GeomAbs_Shape.h"
#include "../GeomAbs/GeomAbs_CurveType.h"


namespace OCNaroWrappers
{

ref class OCTColStd_Array1OfReal;
ref class OCAdaptor2d_HCurve2d;
ref class OCgp_Pnt2d;
ref class OCgp_Vec2d;
ref class OCgp_Lin2d;
ref class OCgp_Circ2d;
ref class OCgp_Elips2d;
ref class OCgp_Hypr2d;
ref class OCgp_Parab2d;
ref class OCGeom2d_BezierCurve;
ref class OCGeom2d_BSplineCurve;


//! Root class for 2D curves on which geometric <br>
//! algorithms work. <br>
//! An adapted curve is an interface between the <br>
//! services provided by a curve, and those required of <br>
//! the curve by algorithms, which use it. <br>
//! A derived concrete class is provided: <br>
//! Geom2dAdaptor_Curve for a curve from the Geom2d package. <br>
public ref class OCAdaptor2d_Curve2d  {

protected:
  Adaptor2d_Curve2d* nativeHandle;
  OCAdaptor2d_Curve2d(OCDummy^) {};

public:
  property Adaptor2d_Curve2d* Handle
  {
    Adaptor2d_Curve2d* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCAdaptor2d_Curve2d(Adaptor2d_Curve2d* nativeHandle);

// Methods PUBLIC


virtual /*instead*/  void Delete() ;


virtual /*instead*/  Standard_Real FirstParameter() ;


virtual /*instead*/  Standard_Real LastParameter() ;


virtual /*instead*/  OCGeomAbs_Shape Continuity() ;

//! If necessary,  breaks the  curve in  intervals  of <br>
//!          continuity  <S>.    And  returns   the number   of <br>
//!          intervals. <br>
virtual /*instead*/  Standard_Integer NbIntervals(OCGeomAbs_Shape S) ;

//! Stores in <T> the  parameters bounding the intervals <br>
//!          of continuity <S>. <br>
//! <br>
//!          The array must provide  enough room to  accomodate <br>
//!          for the parameters. i.e. T.Length() > NbIntervals() <br>
virtual /*instead*/  void Intervals(OCNaroWrappers::OCTColStd_Array1OfReal^ T, OCGeomAbs_Shape S) ;

//! Returns    a  curve equivalent   of  <me>  between <br>
//!          parameters <First>  and <Last>. <Tol>  is used  to <br>
//!          test for 3d points confusion. <br>//! If <First> >= <Last> <br>
virtual /*instead*/  OCAdaptor2d_HCurve2d^ Trim(Standard_Real First, Standard_Real Last, Standard_Real Tol) ;


virtual /*instead*/  System::Boolean IsClosed() ;


virtual /*instead*/  System::Boolean IsPeriodic() ;


virtual /*instead*/  Standard_Real Period() ;

//! Computes the point of parameter U on the curve. <br>
virtual /*instead*/  OCgp_Pnt2d^ Value(Standard_Real U) ;

//! Computes the point of parameter U on the curve. <br>
virtual /*instead*/  void D0(Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P) ;

//! Computes the point of parameter U on the curve with its <br>
//!  first derivative. <br>//! Raised if the continuity of the current interval <br>
//!  is not C1. <br>
virtual /*instead*/  void D1(Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Vec2d^ V) ;


//!  Returns the point P of parameter U, the first and second <br>
//!  derivatives V1 and V2. <br>//! Raised if the continuity of the current interval <br>
//!  is not C2. <br>
virtual /*instead*/  void D2(Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Vec2d^ V1, OCNaroWrappers::OCgp_Vec2d^ V2) ;


//!  Returns the point P of parameter U, the first, the second <br>
//!  and the third derivative. <br>//! Raised if the continuity of the current interval <br>
//!  is not C3. <br>
virtual /*instead*/  void D3(Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Vec2d^ V1, OCNaroWrappers::OCgp_Vec2d^ V2, OCNaroWrappers::OCgp_Vec2d^ V3) ;


//!  The returned vector gives the value of the derivative for the <br>
//!  order of derivation N. <br>//! Raised if the continuity of the current interval <br>
//!  is not CN. <br>//! Raised if N < 1. <br>
virtual /*instead*/  OCgp_Vec2d^ DN(Standard_Real U, Standard_Integer N) ;

//!  Returns the parametric  resolution corresponding <br>
//!         to the real space resolution <R3d>. <br>
virtual /*instead*/  Standard_Real Resolution(Standard_Real R3d) ;

//! Returns  the  type of the   curve  in the  current <br>
//!          interval :   Line,   Circle,   Ellipse, Hyperbola, <br>
//!          Parabola, BezierCurve, BSplineCurve, OtherCurve. <br>
virtual /*instead*/  OCGeomAbs_CurveType GetType() ;


virtual /*instead*/  OCgp_Lin2d^ Line() ;


virtual /*instead*/  OCgp_Circ2d^ Circle() ;


virtual /*instead*/  OCgp_Elips2d^ Ellipse() ;


virtual /*instead*/  OCgp_Hypr2d^ Hyperbola() ;


virtual /*instead*/  OCgp_Parab2d^ Parabola() ;


virtual /*instead*/  Standard_Integer Degree() ;


virtual /*instead*/  System::Boolean IsRational() ;


virtual /*instead*/  Standard_Integer NbPoles() ;


virtual /*instead*/  Standard_Integer NbKnots() ;


virtual /*instead*/  OCGeom2d_BezierCurve^ Bezier() ;


virtual /*instead*/  OCGeom2d_BSplineCurve^ BSpline() ;

~OCAdaptor2d_Curve2d()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif