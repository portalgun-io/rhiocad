// File generated by CPPExt (Transient)
//
#ifndef _Aspect_ColorCubeColorMap_OCWrappers_HeaderFile
#define _Aspect_ColorCubeColorMap_OCWrappers_HeaderFile

// include the wrapped class
#include <Aspect_ColorCubeColorMap.hxx>
#include "../Converter.h"

#include "Aspect_ColorMap.h"



namespace OCNaroWrappers
{

ref class OCAspect_ColorMapEntry;
ref class OCQuantity_Color;


//! This class defines a ColorCube ColorMap object. <br>
public ref class OCAspect_ColorCubeColorMap : OCAspect_ColorMap {

protected:
  // dummy constructor;
  OCAspect_ColorCubeColorMap(OCDummy^) : OCAspect_ColorMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCAspect_ColorCubeColorMap(Handle(Aspect_ColorCubeColorMap)* nativeHandle);

// Methods PUBLIC

//! Create a ColorCube ColorMap. <br>
OCAspect_ColorCubeColorMap(Standard_Integer base_pixel, Standard_Integer redmax, Standard_Integer redmult, Standard_Integer greenmax, Standard_Integer greenmult, Standard_Integer bluemax, Standard_Integer bluemult);


 /*instead*/  void ColorCubeDefinition(Standard_Integer& base_pixel, Standard_Integer& redmax, Standard_Integer& redmult, Standard_Integer& greenmax, Standard_Integer& greenmult, Standard_Integer& bluemax, Standard_Integer& bluemult) ;

//! Returns the index in the ColorMap of the <br>
//!	    ColorMapEntry.Index() equal to <AnEntryIndex>. <br>
//!  Warning: Raises BadAccess if the index is not defined in the <br>
//!	    ColorMap. <br>
 /*instead*/  Standard_Integer FindColorMapIndex(Standard_Integer AColorMapEntryIndex) ;

//! Returns the ColorMapEntry with ColorMapEntry.Index() <br>
//!	    equal to <AnEntryIndex>. <br>
//!  Warning: Raises BadAccess if the index is not defined in the <br>
//!	    ColorMap. <br>
 /*instead*/  OCAspect_ColorMapEntry^ FindEntry(Standard_Integer AColorMapEntryIndex) ;

//! Returns the index in the ColorMap of the nearest <br>
//!	    matching ColorMapEntry <br>
 /*instead*/  Standard_Integer NearestColorMapIndex(OCNaroWrappers::OCQuantity_Color^ aColor) ;

//! Returns the nearest ColorMapEntry that match aColor . <br>
 /*instead*/  OCAspect_ColorMapEntry^ NearestEntry(OCNaroWrappers::OCQuantity_Color^ aColor) ;

//! Search an identical color entry in the color map <me> <br>
//! or returns the nearest ColorMapEntry Index. <br>
 /*instead*/  Standard_Integer AddEntry(OCNaroWrappers::OCQuantity_Color^ aColor) ;

~OCAspect_ColorCubeColorMap()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif