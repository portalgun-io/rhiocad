// File generated by CPPExt (MPV)
//
#ifndef _TopoDS_Edge_OCWrappers_HeaderFile
#define _TopoDS_Edge_OCWrappers_HeaderFile

// include native header
#include <TopoDS_Edge.hxx>
#include "../Converter.h"

#include "TopoDS_Shape.h"

#include "TopoDS_Shape.h"


namespace OCNaroWrappers
{



//! Describes an edge which <br>
//! - references an underlying edge with the potential to <br>
//!   be given a location and an orientation <br>
//! - has a location for the underlying edge, giving its <br>
//!   placement in the local coordinate system <br>
//! - has an orientation for the underlying edge, in terms <br>
//!   of its geometry (as opposed to orientation in <br>
//!   relation to other shapes). <br>
public ref class OCTopoDS_Edge  : public OCTopoDS_Shape {

protected:
  // dummy constructor;
  OCTopoDS_Edge(OCDummy^) : OCTopoDS_Shape((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopoDS_Edge(TopoDS_Edge* nativeHandle);

// Methods PUBLIC

//! Undefined Edge. <br>
OCTopoDS_Edge();

~OCTopoDS_Edge()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif