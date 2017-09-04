// File generated by CPPExt (Transient)
//
#ifndef _V3d_Light_OCWrappers_HeaderFile
#define _V3d_Light_OCWrappers_HeaderFile

// include the wrapped class
#include <V3d_Light.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "V3d_TypeOfLight.h"
#include "V3d_View.h"
#include "../Quantity/Quantity_TypeOfColor.h"
#include "../Quantity/Quantity_NameOfColor.h"


namespace OCNaroWrappers
{

ref class OCVisual3d_Light;
ref class OCGraphic3d_Structure;
ref class OCV3d_Viewer;
ref class OCQuantity_Color;
ref class OCV3d_View;
ref class OCGraphic3d_Vertex;


//! Defines services on Light type objects.. <br>
public ref class OCV3d_Light : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCV3d_Light(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCV3d_Light(Handle(V3d_Light)* nativeHandle);

// Methods PUBLIC


OCV3d_Light(OCNaroWrappers::OCV3d_Viewer^ VM);

//! Defines the colour of a light source <br>
//!          according to the type of colour definition <br>
//!          and the three corresponding values. <br>
 /*instead*/  void SetColor(OCQuantity_TypeOfColor Type, Quantity_Parameter V1, Quantity_Parameter V2, Quantity_Parameter V3) ;

//! Defines the colour of a light source by giving <br>
//!	    the name of the colour in the form Quantity_NOC_xxxx . <br>
 /*instead*/  void SetColor(OCQuantity_NameOfColor Name) ;

//! Defines the colour of a light source by giving <br>
//!	    the basic colour. <br>
 /*instead*/  void SetColor(OCNaroWrappers::OCQuantity_Color^ Name) ;

//! Returns the colour of the light source depending of <br>
//!	    the color type. <br>
 /*instead*/  void Color(OCQuantity_TypeOfColor Type, Quantity_Parameter& V1, Quantity_Parameter& V2, Quantity_Parameter& V3) ;

//! Returns the colour of the light source. <br>
 /*instead*/  void Color(OCQuantity_NameOfColor& Name) ;

//! Returns the colour of the light source. <br>
 /*instead*/  OCQuantity_Color^ Color() ;

//! Returns the Type of the Light <br>
 /*instead*/  OCV3d_TypeOfLight Type() ;

//! returns true if the light is a headlight <br>
 /*instead*/  System::Boolean Headlight() ;

//! Returns TRUE when a light representation is displayed <br>
 /*instead*/  System::Boolean IsDisplayed() ;

~OCV3d_Light()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif