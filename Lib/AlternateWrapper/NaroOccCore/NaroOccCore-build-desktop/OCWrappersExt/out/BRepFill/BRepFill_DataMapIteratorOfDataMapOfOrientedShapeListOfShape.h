// File generated by CPPExt (MPV)
//
#ifndef _BRepFill_DataMapIteratorOfDataMapOfOrientedShapeListOfShape_OCWrappers_HeaderFile
#define _BRepFill_DataMapIteratorOfDataMapOfOrientedShapeListOfShape_OCWrappers_HeaderFile

// include native header
#include <BRepFill_DataMapIteratorOfDataMapOfOrientedShapeListOfShape.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopTools_ListOfShape;
ref class OCTopTools_OrientedShapeMapHasher;
ref class OCBRepFill_DataMapOfOrientedShapeListOfShape;
ref class OCBRepFill_DataMapNodeOfDataMapOfOrientedShapeListOfShape;



public ref class OCBRepFill_DataMapIteratorOfDataMapOfOrientedShapeListOfShape  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCBRepFill_DataMapIteratorOfDataMapOfOrientedShapeListOfShape(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepFill_DataMapIteratorOfDataMapOfOrientedShapeListOfShape(BRepFill_DataMapIteratorOfDataMapOfOrientedShapeListOfShape* nativeHandle);

// Methods PUBLIC


OCBRepFill_DataMapIteratorOfDataMapOfOrientedShapeListOfShape();


OCBRepFill_DataMapIteratorOfDataMapOfOrientedShapeListOfShape(OCNaroWrappers::OCBRepFill_DataMapOfOrientedShapeListOfShape^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCBRepFill_DataMapOfOrientedShapeListOfShape^ aMap) ;


 /*instead*/  OCTopoDS_Shape^ Key() ;


 /*instead*/  OCTopTools_ListOfShape^ Value() ;

~OCBRepFill_DataMapIteratorOfDataMapOfOrientedShapeListOfShape()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif