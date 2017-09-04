// File generated by CPPExt (Transient)
//
#ifndef _BooleanOperations_IndexedDataMapNodeOfIndexedDataMapOfShapeAncestorsSuccessors_OCWrappers_HeaderFile
#define _BooleanOperations_IndexedDataMapNodeOfIndexedDataMapOfShapeAncestorsSuccessors_OCWrappers_HeaderFile

// include the wrapped class
#include <BooleanOperations_IndexedDataMapNodeOfIndexedDataMapOfShapeAncestorsSuccessors.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "../TopoDS/TopoDS_Shape.h"
#include "BooleanOperations_AncestorsSeqAndSuccessorsSeq.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCBooleanOperations_AncestorsSeqAndSuccessorsSeq;
ref class OCTopTools_ShapeMapHasher;
ref class OCBooleanOperations_IndexedDataMapOfShapeAncestorsSuccessors;



public ref class OCBooleanOperations_IndexedDataMapNodeOfIndexedDataMapOfShapeAncestorsSuccessors : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCBooleanOperations_IndexedDataMapNodeOfIndexedDataMapOfShapeAncestorsSuccessors(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCBooleanOperations_IndexedDataMapNodeOfIndexedDataMapOfShapeAncestorsSuccessors(Handle(BooleanOperations_IndexedDataMapNodeOfIndexedDataMapOfShapeAncestorsSuccessors)* nativeHandle);

// Methods PUBLIC


OCBooleanOperations_IndexedDataMapNodeOfIndexedDataMapOfShapeAncestorsSuccessors(OCNaroWrappers::OCTopoDS_Shape^ K1, Standard_Integer K2, OCNaroWrappers::OCBooleanOperations_AncestorsSeqAndSuccessorsSeq^ I, TCollection_MapNodePtr n1, TCollection_MapNodePtr n2);


 /*instead*/  OCTopoDS_Shape^ Key1() ;


 /*instead*/  Standard_Integer Key2() ;


 /*instead*/  TCollection_MapNodePtr& Next2() ;


 /*instead*/  OCBooleanOperations_AncestorsSeqAndSuccessorsSeq^ Value() ;

~OCBooleanOperations_IndexedDataMapNodeOfIndexedDataMapOfShapeAncestorsSuccessors()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif