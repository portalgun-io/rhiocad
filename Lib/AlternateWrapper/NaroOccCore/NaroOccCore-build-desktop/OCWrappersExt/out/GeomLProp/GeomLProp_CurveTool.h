// File generated by CPPExt (MPV)
//
#ifndef _GeomLProp_CurveTool_OCWrappers_HeaderFile
#define _GeomLProp_CurveTool_OCWrappers_HeaderFile

// include native header
#include <GeomLProp_CurveTool.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCGeom_Curve;
ref class OCgp_Pnt;
ref class OCgp_Vec;



public ref class OCGeomLProp_CurveTool  {

protected:
  GeomLProp_CurveTool* nativeHandle;
  OCGeomLProp_CurveTool(OCDummy^) {};

public:
  property GeomLProp_CurveTool* Handle
  {
    GeomLProp_CurveTool* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCGeomLProp_CurveTool(GeomLProp_CurveTool* nativeHandle);

// Methods PUBLIC

//! Computes the point <P> of parameter <U> on the curve <C>. <br>
static /*instead*/  void Value(OCNaroWrappers::OCGeom_Curve^ C, Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P) ;

//! Computes the point <P> and first derivative <V1> of <br>
//!          parameter <U> on the curve <C>. <br>
static /*instead*/  void D1(OCNaroWrappers::OCGeom_Curve^ C, Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V1) ;

//! Computes the point <P>, the first derivative <V1> and second <br>
//!          derivative <V2> of parameter <U> on the curve <C>. <br>
static /*instead*/  void D2(OCNaroWrappers::OCGeom_Curve^ C, Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V1, OCNaroWrappers::OCgp_Vec^ V2) ;

//! Computes the point <P>, the first derivative <V1>, the <br>
//!          second derivative <V2> and third derivative <V3> of <br>
//!          parameter <U> on the curve <C>. <br>
static /*instead*/  void D3(OCNaroWrappers::OCGeom_Curve^ C, Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V1, OCNaroWrappers::OCgp_Vec^ V2, OCNaroWrappers::OCgp_Vec^ V3) ;

//! returns the order of continuity of the curve <C>. <br>
//!          returns 1 : first derivative only is computable <br>
//!          returns 2 : first and second derivative only are computable. <br>
//!          returns 3 : first, second and third are computable. <br>
static /*instead*/  Standard_Integer Continuity(OCNaroWrappers::OCGeom_Curve^ C) ;

//! returns the first parameter bound of the curve. <br>
//! <br>
static /*instead*/  Standard_Real FirstParameter(OCNaroWrappers::OCGeom_Curve^ C) ;

//! returns the last parameter bound of the curve. <br>
//!          FirstParameter must be less than LastParamenter. <br>
static /*instead*/  Standard_Real LastParameter(OCNaroWrappers::OCGeom_Curve^ C) ;

~OCGeomLProp_CurveTool()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
