// File generated by CPPExt (MPV)
//
#ifndef _GC_MakeSegment_OCWrappers_HeaderFile
#define _GC_MakeSegment_OCWrappers_HeaderFile

// include native header
#include <GC_MakeSegment.hxx>
#include "../Converter.h"

#include "GC_Root.h"

#include "GC_Root.h"


namespace OCNaroWrappers
{

ref class OCGeom_TrimmedCurve;
ref class OCgp_Pnt;
ref class OCgp_Lin;


//! Implements construction algorithms for a line <br>
//! segment in 3D space. The result is a Geom_TrimmedCurve curve. <br>
//! A MakeSegment object provides a framework for: <br>
//! -   defining the construction of the line segment, <br>
//! -   implementing the construction algorithm, and <br>
//! -   consulting the results. In particular, the Value <br>
//!   function returns the constructed line segment. <br>
public ref class OCGC_MakeSegment  : public OCGC_Root {

protected:
  // dummy constructor;
  OCGC_MakeSegment(OCDummy^) : OCGC_Root((OCDummy^)nullptr) {};

public:

// constructor from native
OCGC_MakeSegment(GC_MakeSegment* nativeHandle);

// Methods PUBLIC

//! Make a segment of Line from the 2 points <P1> and <P2>. <br>
//!          It returns NullObject if <P1> and <P2> are confused. <br>
OCGC_MakeSegment(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2);

//! Make a segment of Line from the line <Line1> <br>
//!          between the two parameters U1 and U2. <br>
//!          It returns NullObject if <U1> is equal <U2>. <br>
OCGC_MakeSegment(OCNaroWrappers::OCgp_Lin^ Line, Standard_Real U1, Standard_Real U2);

//! Make a segment of Line from the line <Line1> <br>
//!          between the point <Point> and the parameter Ulast. <br>
//!          It returns NullObject if <U1> is equal <U2>. <br>
OCGC_MakeSegment(OCNaroWrappers::OCgp_Lin^ Line, OCNaroWrappers::OCgp_Pnt^ Point, Standard_Real Ulast);

//! Make a segment of Line from the line <Line1> <br>
//!          between the two points <P1> and <P2>. <br>
//!          It returns NullObject if <U1> is equal <U2>. <br>
OCGC_MakeSegment(OCNaroWrappers::OCgp_Lin^ Line, OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2);

//! Returns the constructed line segment. <br>
 /*instead*/  OCGeom_TrimmedCurve^ Value() ;


 /*instead*/  OCGeom_TrimmedCurve^ Operator() ;

~OCGC_MakeSegment()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
