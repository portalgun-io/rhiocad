// File generated by CPPExt (MPV)
//
#ifndef _TNaming_ShapesSet_OCWrappers_HeaderFile
#define _TNaming_ShapesSet_OCWrappers_HeaderFile

// include native header
#include <TNaming_ShapesSet.hxx>
#include "../Converter.h"


#include "../TopTools/TopTools_MapOfShape.h"
#include "../TopAbs/TopAbs_ShapeEnum.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopTools_MapOfShape;



public ref class OCTNaming_ShapesSet  {

protected:
  TNaming_ShapesSet* nativeHandle;
  OCTNaming_ShapesSet(OCDummy^) {};

public:
  property TNaming_ShapesSet* Handle
  {
    TNaming_ShapesSet* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTNaming_ShapesSet(TNaming_ShapesSet* nativeHandle);

// Methods PUBLIC


OCTNaming_ShapesSet();


OCTNaming_ShapesSet(OCNaroWrappers::OCTopoDS_Shape^ S, OCTopAbs_ShapeEnum Type);

//! Removes all Shapes <br>
 /*instead*/  void Clear() ;

//! Adds the Shape <S> <br>
 /*instead*/  System::Boolean Add(OCNaroWrappers::OCTopoDS_Shape^ S) ;

//! Returns True  if <S> is in <me> <br>
 /*instead*/  System::Boolean Contains(OCNaroWrappers::OCTopoDS_Shape^ S) ;

//! Removes <S> in <me>. <br>
 /*instead*/  System::Boolean Remove(OCNaroWrappers::OCTopoDS_Shape^ S) ;

//! Adds the shapes contained in <Shapes>. <br>
 /*instead*/  void Add(OCNaroWrappers::OCTNaming_ShapesSet^ Shapes) ;

//! Erases in <me> the shapes not <br>
//!          contained in <Shapes> <br>
 /*instead*/  void Filter(OCNaroWrappers::OCTNaming_ShapesSet^ Shapes) ;

//! Removes in <me> the shapes contained in <Shapes> <br>
 /*instead*/  void Remove(OCNaroWrappers::OCTNaming_ShapesSet^ Shapes) ;


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  Standard_Integer NbShapes() ;


 /*instead*/  OCTopTools_MapOfShape^ ChangeMap() ;


 /*instead*/  OCTopTools_MapOfShape^ Map() ;

~OCTNaming_ShapesSet()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif