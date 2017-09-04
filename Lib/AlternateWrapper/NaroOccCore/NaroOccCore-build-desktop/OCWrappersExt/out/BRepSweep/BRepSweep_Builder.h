// File generated by CPPExt (MPV)
//
#ifndef _BRepSweep_Builder_OCWrappers_HeaderFile
#define _BRepSweep_Builder_OCWrappers_HeaderFile

// include native header
#include <BRepSweep_Builder.hxx>
#include "../Converter.h"


#include "../BRep/BRep_Builder.h"
#include "../TopAbs/TopAbs_Orientation.h"


namespace OCNaroWrappers
{

ref class OCBRep_Builder;
ref class OCTopoDS_Shape;


//! implements the abstract Builder with the BRep Builder <br>
public ref class OCBRepSweep_Builder  {

protected:
  BRepSweep_Builder* nativeHandle;
  OCBRepSweep_Builder(OCDummy^) {};

public:
  property BRepSweep_Builder* Handle
  {
    BRepSweep_Builder* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepSweep_Builder(BRepSweep_Builder* nativeHandle);

// Methods PUBLIC

//! Creates a Builder. <br>
OCBRepSweep_Builder(OCNaroWrappers::OCBRep_Builder^ aBuilder);


 /*instead*/  OCBRep_Builder^ Builder() ;

//! Returns an empty Compound. <br>
 /*instead*/  void MakeCompound(OCNaroWrappers::OCTopoDS_Shape^ aCompound) ;

//! Returns an empty CompSolid. <br>
 /*instead*/  void MakeCompSolid(OCNaroWrappers::OCTopoDS_Shape^ aCompSolid) ;

//! Returns an empty Solid. <br>
 /*instead*/  void MakeSolid(OCNaroWrappers::OCTopoDS_Shape^ aSolid) ;

//! Returns an empty Shell. <br>
 /*instead*/  void MakeShell(OCNaroWrappers::OCTopoDS_Shape^ aShell) ;

//! Returns an empty Wire. <br>
 /*instead*/  void MakeWire(OCNaroWrappers::OCTopoDS_Shape^ aWire) ;

//! Adds the Shape 1 in the Shape 2, set to <br>
//!          <Orient> orientation. <br>
 /*instead*/  void Add(OCNaroWrappers::OCTopoDS_Shape^ aShape1, OCNaroWrappers::OCTopoDS_Shape^ aShape2, OCTopAbs_Orientation Orient) ;

//! Adds the Shape 1 in the Shape 2. <br>
 /*instead*/  void Add(OCNaroWrappers::OCTopoDS_Shape^ aShape1, OCNaroWrappers::OCTopoDS_Shape^ aShape2) ;

~OCBRepSweep_Builder()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif