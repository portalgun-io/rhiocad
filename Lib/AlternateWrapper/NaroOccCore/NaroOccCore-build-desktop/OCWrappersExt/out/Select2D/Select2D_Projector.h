// File generated by CPPExt (Transient)
//
#ifndef _Select2D_Projector_OCWrappers_HeaderFile
#define _Select2D_Projector_OCWrappers_HeaderFile

// include the wrapped class
#include <Select2D_Projector.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "../gp/gp_Trsf2d.h"


namespace OCNaroWrappers
{

ref class OCgp_Pnt2d;


//! An abstract framework to define a projector. <br>
//! StdSelect_TextProjector2d inherits this framework <br>
//! and provides a projector for texts. <br>
public ref class OCSelect2D_Projector : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCSelect2D_Projector(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCSelect2D_Projector(Handle(Select2D_Projector)* nativeHandle);

// Methods PUBLIC


OCSelect2D_Projector();

~OCSelect2D_Projector()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif