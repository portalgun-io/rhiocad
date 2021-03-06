// File generated by CPPExt (MPV)
//
#ifndef _IntPatch_CSFunctionOfTheRstIntOfIntersection_OCWrappers_HeaderFile
#define _IntPatch_CSFunctionOfTheRstIntOfIntersection_OCWrappers_HeaderFile

// include native header
#include <IntPatch_CSFunctionOfTheRstIntOfIntersection.hxx>
#include "../Converter.h"

#include "../math/math_FunctionSetWithDerivatives.h"

#include "../gp/gp_Pnt.h"
#include "../math/math_FunctionSetWithDerivatives.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_HSurface;
ref class OCIntPatch_HSurfaceTool;
ref class OCAdaptor2d_HCurve2d;
ref class OCIntPatch_HCurve2dTool;
ref class OCmath_Vector;
ref class OCmath_Matrix;
ref class OCgp_Pnt;



public ref class OCIntPatch_CSFunctionOfTheRstIntOfIntersection  : public OCmath_FunctionSetWithDerivatives {

protected:
  // dummy constructor;
  OCIntPatch_CSFunctionOfTheRstIntOfIntersection(OCDummy^) : OCmath_FunctionSetWithDerivatives((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntPatch_CSFunctionOfTheRstIntOfIntersection(IntPatch_CSFunctionOfTheRstIntOfIntersection* nativeHandle);

// Methods PUBLIC


OCIntPatch_CSFunctionOfTheRstIntOfIntersection(OCNaroWrappers::OCAdaptor3d_HSurface^ S1, OCNaroWrappers::OCAdaptor2d_HCurve2d^ C, OCNaroWrappers::OCAdaptor3d_HSurface^ S2);


 /*instead*/  Standard_Integer NbVariables() ;


 /*instead*/  Standard_Integer NbEquations() ;


 /*instead*/  System::Boolean Value(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Vector^ F) ;


 /*instead*/  System::Boolean Derivatives(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Matrix^ D) ;


 /*instead*/  System::Boolean Values(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Vector^ F, OCNaroWrappers::OCmath_Matrix^ D) ;


 /*instead*/  OCgp_Pnt^ Point() ;


 /*instead*/  Standard_Real Root() ;


 /*instead*/  OCAdaptor3d_HSurface^ AuxillarSurface() ;


 /*instead*/  OCAdaptor2d_HCurve2d^ AuxillarCurve() ;

~OCIntPatch_CSFunctionOfTheRstIntOfIntersection()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
