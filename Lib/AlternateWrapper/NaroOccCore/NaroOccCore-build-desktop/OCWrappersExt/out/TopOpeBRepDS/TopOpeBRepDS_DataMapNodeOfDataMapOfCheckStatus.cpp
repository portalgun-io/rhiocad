// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepDS_DataMapNodeOfDataMapOfCheckStatus.h"
#include "../Converter.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "TopOpeBRepDS_DataMapOfCheckStatus.h"
#include "TopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus.h"


using namespace OCNaroWrappers;

OCTopOpeBRepDS_DataMapNodeOfDataMapOfCheckStatus::OCTopOpeBRepDS_DataMapNodeOfDataMapOfCheckStatus(Handle(TopOpeBRepDS_DataMapNodeOfDataMapOfCheckStatus)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TopOpeBRepDS_DataMapNodeOfDataMapOfCheckStatus(*nativeHandle);
}

OCTopOpeBRepDS_DataMapNodeOfDataMapOfCheckStatus::OCTopOpeBRepDS_DataMapNodeOfDataMapOfCheckStatus(Standard_Integer K, OCTopOpeBRepDS_CheckStatus I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopOpeBRepDS_DataMapNodeOfDataMapOfCheckStatus(new TopOpeBRepDS_DataMapNodeOfDataMapOfCheckStatus(K, (TopOpeBRepDS_CheckStatus)I, n));
}

 Standard_Integer OCTopOpeBRepDS_DataMapNodeOfDataMapOfCheckStatus::Key()
{
  return (*((Handle_TopOpeBRepDS_DataMapNodeOfDataMapOfCheckStatus*)nativeHandle))->Key();
}

 OCTopOpeBRepDS_CheckStatus OCTopOpeBRepDS_DataMapNodeOfDataMapOfCheckStatus::Value()
{
  return (OCTopOpeBRepDS_CheckStatus)((*((Handle_TopOpeBRepDS_DataMapNodeOfDataMapOfCheckStatus*)nativeHandle))->Value());
}

