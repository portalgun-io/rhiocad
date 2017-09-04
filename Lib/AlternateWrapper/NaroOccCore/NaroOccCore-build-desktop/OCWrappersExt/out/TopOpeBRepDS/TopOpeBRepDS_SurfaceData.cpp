// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepDS_SurfaceData.h"
#include "../Converter.h"
#include "TopOpeBRepDS_DataStructure.h"
#include "TopOpeBRepDS_Surface.h"


using namespace OCNaroWrappers;

OCTopOpeBRepDS_SurfaceData::OCTopOpeBRepDS_SurfaceData(TopOpeBRepDS_SurfaceData* nativeHandle) : OCTopOpeBRepDS_GeometryData((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTopOpeBRepDS_SurfaceData::OCTopOpeBRepDS_SurfaceData() : OCTopOpeBRepDS_GeometryData((OCDummy^)nullptr)

{
  nativeHandle = new TopOpeBRepDS_SurfaceData();
}

OCTopOpeBRepDS_SurfaceData::OCTopOpeBRepDS_SurfaceData(OCNaroWrappers::OCTopOpeBRepDS_Surface^ S) : OCTopOpeBRepDS_GeometryData((OCDummy^)nullptr)

{
  nativeHandle = new TopOpeBRepDS_SurfaceData(*((TopOpeBRepDS_Surface*)S->Handle));
}

