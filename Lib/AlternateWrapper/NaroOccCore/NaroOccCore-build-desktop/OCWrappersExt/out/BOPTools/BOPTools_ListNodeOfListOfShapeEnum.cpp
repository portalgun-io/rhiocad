// File generated by CPPExt (CPP file)
//

#include "BOPTools_ListNodeOfListOfShapeEnum.h"
#include "../Converter.h"
#include "BOPTools_ListOfShapeEnum.h"
#include "BOPTools_ListIteratorOfListOfShapeEnum.h"


using namespace OCNaroWrappers;

OCBOPTools_ListNodeOfListOfShapeEnum::OCBOPTools_ListNodeOfListOfShapeEnum(Handle(BOPTools_ListNodeOfListOfShapeEnum)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BOPTools_ListNodeOfListOfShapeEnum(*nativeHandle);
}

OCBOPTools_ListNodeOfListOfShapeEnum::OCBOPTools_ListNodeOfListOfShapeEnum(OCTopAbs_ShapeEnum I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BOPTools_ListNodeOfListOfShapeEnum(new BOPTools_ListNodeOfListOfShapeEnum((TopAbs_ShapeEnum)I, n));
}

 OCTopAbs_ShapeEnum OCBOPTools_ListNodeOfListOfShapeEnum::Value()
{
  return (OCTopAbs_ShapeEnum)((*((Handle_BOPTools_ListNodeOfListOfShapeEnum*)nativeHandle))->Value());
}

