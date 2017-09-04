// File generated by CPPExt (MPV)
//
#ifndef _IntPatch_APolygoOfTheRstIntOfIntersection_OCWrappers_HeaderFile
#define _IntPatch_APolygoOfTheRstIntOfIntersection_OCWrappers_HeaderFile

// include native header
#include <IntPatch_APolygoOfTheRstIntOfIntersection.hxx>
#include "../Converter.h"

#include "IntPatch_Polygo.h"

#include "../TColgp/TColgp_Array1OfPnt2d.h"
#include "../TColStd/TColStd_Array1OfReal.h"
#include "../Bnd/Bnd_Box2d.h"
#include "IntPatch_Polygo.h"


namespace OCNaroWrappers
{

ref class OCAdaptor2d_HCurve2d;
ref class OCIntPatch_HCurve2dTool;
ref class OCBnd_Box2d;
ref class OCgp_Pnt2d;



public ref class OCIntPatch_APolygoOfTheRstIntOfIntersection  : public OCIntPatch_Polygo {

protected:
  // dummy constructor;
  OCIntPatch_APolygoOfTheRstIntOfIntersection(OCDummy^) : OCIntPatch_Polygo((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntPatch_APolygoOfTheRstIntOfIntersection(IntPatch_APolygoOfTheRstIntOfIntersection* nativeHandle);

// Methods PUBLIC


OCIntPatch_APolygoOfTheRstIntOfIntersection(OCNaroWrappers::OCAdaptor2d_HCurve2d^ A, Standard_Integer NbSample, Standard_Real Pfirst, Standard_Real Plast, OCNaroWrappers::OCBnd_Box2d^ BoxOtherPolygon);


 /*instead*/  OCBnd_Box2d^ Bounding() ;


 /*instead*/  Standard_Real Error() ;


 /*instead*/  System::Boolean Closed() ;


 /*instead*/  Standard_Integer NbPoints() ;


 /*instead*/  OCgp_Pnt2d^ Point(Standard_Integer Index) ;


 /*instead*/  Standard_Real Parameter(Standard_Integer Index) ;


 /*instead*/  void SetOffset(Standard_Real OffsetX, Standard_Real OffsetY) ;

~OCIntPatch_APolygoOfTheRstIntOfIntersection()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif