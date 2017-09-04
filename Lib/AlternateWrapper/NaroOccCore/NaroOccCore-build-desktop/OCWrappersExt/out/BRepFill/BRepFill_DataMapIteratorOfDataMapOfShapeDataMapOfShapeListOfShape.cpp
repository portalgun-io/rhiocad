// File generated by CPPExt (CPP file)
//

#include "BRepFill_DataMapIteratorOfDataMapOfShapeDataMapOfShapeListOfShape.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopTools/TopTools_DataMapOfShapeListOfShape.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "BRepFill_DataMapOfShapeDataMapOfShapeListOfShape.h"
#include "BRepFill_DataMapNodeOfDataMapOfShapeDataMapOfShapeListOfShape.h"


using namespace OCNaroWrappers;

OCBRepFill_DataMapIteratorOfDataMapOfShapeDataMapOfShapeListOfShape::OCBRepFill_DataMapIteratorOfDataMapOfShapeDataMapOfShapeListOfShape(BRepFill_DataMapIteratorOfDataMapOfShapeDataMapOfShapeListOfShape* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepFill_DataMapIteratorOfDataMapOfShapeDataMapOfShapeListOfShape::OCBRepFill_DataMapIteratorOfDataMapOfShapeDataMapOfShapeListOfShape() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new BRepFill_DataMapIteratorOfDataMapOfShapeDataMapOfShapeListOfShape();
}

OCBRepFill_DataMapIteratorOfDataMapOfShapeDataMapOfShapeListOfShape::OCBRepFill_DataMapIteratorOfDataMapOfShapeDataMapOfShapeListOfShape(OCNaroWrappers::OCBRepFill_DataMapOfShapeDataMapOfShapeListOfShape^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new BRepFill_DataMapIteratorOfDataMapOfShapeDataMapOfShapeListOfShape(*((BRepFill_DataMapOfShapeDataMapOfShapeListOfShape*)aMap->Handle));
}

 void OCBRepFill_DataMapIteratorOfDataMapOfShapeDataMapOfShapeListOfShape::Initialize(OCNaroWrappers::OCBRepFill_DataMapOfShapeDataMapOfShapeListOfShape^ aMap)
{
  ((BRepFill_DataMapIteratorOfDataMapOfShapeDataMapOfShapeListOfShape*)nativeHandle)->Initialize(*((BRepFill_DataMapOfShapeDataMapOfShapeListOfShape*)aMap->Handle));
}

OCTopoDS_Shape^ OCBRepFill_DataMapIteratorOfDataMapOfShapeDataMapOfShapeListOfShape::Key()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepFill_DataMapIteratorOfDataMapOfShapeDataMapOfShapeListOfShape*)nativeHandle)->Key();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopTools_DataMapOfShapeListOfShape^ OCBRepFill_DataMapIteratorOfDataMapOfShapeDataMapOfShapeListOfShape::Value()
{
  TopTools_DataMapOfShapeListOfShape* tmp = new TopTools_DataMapOfShapeListOfShape(0);
  *tmp = ((BRepFill_DataMapIteratorOfDataMapOfShapeDataMapOfShapeListOfShape*)nativeHandle)->Value();
  return gcnew OCTopTools_DataMapOfShapeListOfShape(tmp);
}

