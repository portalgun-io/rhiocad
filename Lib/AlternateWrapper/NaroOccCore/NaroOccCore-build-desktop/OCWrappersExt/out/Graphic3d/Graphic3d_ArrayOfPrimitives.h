// File generated by CPPExt (Transient)
//
#ifndef _Graphic3d_ArrayOfPrimitives_OCWrappers_HeaderFile
#define _Graphic3d_ArrayOfPrimitives_OCWrappers_HeaderFile

// include the wrapped class
#include <Graphic3d_ArrayOfPrimitives.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "Graphic3d_TypeOfPrimitiveArray.h"


namespace OCNaroWrappers
{

ref class OCGraphic3d_Group;
ref class OCgp_Pnt;
ref class OCQuantity_Color;
ref class OCgp_Dir;
ref class OCgp_Pnt2d;


//! This class furnish services to defined and fill an <br>
//!      array of primitives compatible with the use of <br>
//!      the OPENGl glDrawArrays() or glDrawElements() functions. <br>
//!      NOTE that the main goal of this kind of primitive <br>
//!      is to avoid multiple copies of datas between <br>
//!      each layer of the software. <br>
//!      So the array datas exist only one time and the use <br>
//!      of SetXxxxxx() methods enable to change dynamically <br>
//!      the aspect of this primitive. <br>
public ref class OCGraphic3d_ArrayOfPrimitives : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCGraphic3d_ArrayOfPrimitives(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCGraphic3d_ArrayOfPrimitives(Handle(Graphic3d_ArrayOfPrimitives)* nativeHandle);

// Methods PUBLIC

//!  Warning <br>
//! You must use a coherent set of AddVertex() methods according to the <br>
//! <hasVNormals>,<hasVColors>,<hasVTexels>,<hasBColors> <br>
//! User is responsible of confuse vertex and bad normal orientation. <br>
//! You must use AddBound() method only if the <maxBounds> <br>
//! constructor parameter is > 0. <br>
//! You must use AddEdge() method only if the <maxEdges> <br>
//! constructor parameter is > 0. <br>
//! You must use a coherent set of AddEdge() methods according to the <br>
//! <hasEdgeInfos> constructor parameter. <br>
OCGraphic3d_ArrayOfPrimitives(OCGraphic3d_TypeOfPrimitiveArray aType, Standard_Integer maxVertexs, Standard_Integer maxBounds, Standard_Integer maxEdges, System::Boolean hasVNormals, System::Boolean hasVColors, System::Boolean hasBColors, System::Boolean hasTexels, System::Boolean hasEdgeInfos);

//! Adds a vertice in the array. <br>
//! returns the actual vertex number. <br>
 /*instead*/  Standard_Integer AddVertex(OCNaroWrappers::OCgp_Pnt^ aVertice) ;

//! Adds a vertice in the array. <br>
//! returns the actual vertex number. <br>
 /*instead*/  Standard_Integer AddVertex(Standard_Real X, Standard_Real Y, Standard_Real Z) ;

//! Adds a vertice and vertex color in the vertex array. <br>
//! returns the actual vertex number. <br>
//!  Warning: <aColor> is ignored when the <hasVColors> <br>
//! constructor parameter is FALSE <br>
 /*instead*/  Standard_Integer AddVertex(OCNaroWrappers::OCgp_Pnt^ aVertice, OCNaroWrappers::OCQuantity_Color^ aColor) ;

//! Adds a vertice and vertex color in the vertex array. <br>
//! returns the actual vertex number. <br>
//! Warning: <aColor> is ignored when the <hasVColors> <br>
//! constructor parameter is FALSE <br>
//! aColor = Alpha << 24 + Blue << 16 + Green << 8 + Red <br>
//! On all architecture proccers type (x86 or SPARC) you can <br>
//! use this byte order. <br>
 /*instead*/  Standard_Integer AddVertex(OCNaroWrappers::OCgp_Pnt^ aVertice, Standard_Integer aColor) ;

//! Adds a vertice and vertex normal in the vertex array. <br>
//! returns the actual vertex number. <br>
//!  Warning: <aNormal> is ignored when the <hasVNormals> <br>
//! constructor parameter is FALSE. <br>
 /*instead*/  Standard_Integer AddVertex(OCNaroWrappers::OCgp_Pnt^ aVertice, OCNaroWrappers::OCgp_Dir^ aNormal) ;

//! Adds a vertice and vertex normal in the vertex array. <br>
//! returns the actual vertex number. <br>
//!  Warning: <aNormal> is ignored when the <hasVNormals> <br>
//! constructor parameter is FALSE. <br>
 /*instead*/  Standard_Integer AddVertex(Standard_Real X, Standard_Real Y, Standard_Real Z, Standard_Real NX, Standard_Real NY, Standard_Real NZ) ;

//! Adds a vertice,vertex normal and color in the vertex array. <br>
//! returns the actual vertex number. <br>
//!  Warning: <aNormal> is ignored when the <hasVNormals> <br>
//! constructor parameter is FALSE. <br>
//!          <aColor> is ignored when the <hasVColors> <br>
//! constructor parameter is FALSE <br>
 /*instead*/  Standard_Integer AddVertex(OCNaroWrappers::OCgp_Pnt^ aVertice, OCNaroWrappers::OCgp_Dir^ aNormal, OCNaroWrappers::OCQuantity_Color^ aColor) ;

//! Adds a vertice,vertex normal and color in the vertex array. <br>
//! returns the actual vertex number. <br>
//!  Warning: <aNormal> is ignored when the <hasVNormals> <br>
//! constructor parameter is FALSE. <br>
//!          <aColor> is ignored when the <hasVColors> <br>
//! constructor parameter is FALSE <br>
//! aColor = Alpha << 24 + Blue << 16 + Green << 8 + Red <br>
//! On all architecture proccers type (x86 or SPARC) you can <br>
//! use this byte order. <br>
 /*instead*/  Standard_Integer AddVertex(OCNaroWrappers::OCgp_Pnt^ aVertice, OCNaroWrappers::OCgp_Dir^ aNormal, Standard_Integer aColor) ;

//! Adds a vertice and vertex texture in the vertex array. <br>
//! returns the actual vertex number. <br>
//! <aTexel> is ignored when the <hasVTexels> <br>
//! constructor parameter is FALSE. <br>
 /*instead*/  Standard_Integer AddVertex(OCNaroWrappers::OCgp_Pnt^ aVertice, OCNaroWrappers::OCgp_Pnt2d^ aTexel) ;

//! Adds a vertice and vertex texture coordinates in the vertex array. <br>
//! returns the actual vertex number. <br>
//! <aTexel> is ignored when the <hasVTexels> <br>
//! constructor parameter is FALSE. <br>
 /*instead*/  Standard_Integer AddVertex(Standard_Real X, Standard_Real Y, Standard_Real Z, Standard_Real TX, Standard_Real TY) ;

//! Adds a vertice,vertex normal and texture in the vertex array. <br>
//! returns the actual vertex number. <br>
//!  Warning: <aNormal> is ignored when the <hasVNormals> <br>
//! constructor parameter is FALSE. <br>
//! <aTexel> is ignored when the <hasVTexels> <br>
//! constructor parameter is FALSE. <br>
 /*instead*/  Standard_Integer AddVertex(OCNaroWrappers::OCgp_Pnt^ aVertice, OCNaroWrappers::OCgp_Dir^ aNormal, OCNaroWrappers::OCgp_Pnt2d^ aTexel) ;

//! Adds a vertice,vertex normal and texture in the vertex array. <br>
//! returns the actual vertex number. <br>
//!  Warning: <aNormal> is ignored when the <hasVNormals> <br>
//! constructor parameter is FALSE. <br>
//! <aTexel> is ignored when the <hasVTexels> <br>
//! constructor parameter is FALSE. <br>
 /*instead*/  Standard_Integer AddVertex(Standard_Real X, Standard_Real Y, Standard_Real Z, Standard_Real NX, Standard_Real NY, Standard_Real NZ, Standard_Real TX, Standard_Real TY) ;

//! Adds a bound of length <edgeNumber> in the bound array <br>
//! returns the actual bounds number. <br>
 /*instead*/  Standard_Integer AddBound(Standard_Integer edgeNumber) ;

//! Adds a bound of length <edgeNumber> and bound color <br>
//! <aBColor> in the bound array. <br>
//! returns the actual bounds number. <br>
//!  Warning: <aBColor> is ignored when the <hasBColors> <br>
//! constructor parameter is FALSE <br>
 /*instead*/  Standard_Integer AddBound(Standard_Integer edgeNumber, OCNaroWrappers::OCQuantity_Color^ aBColor) ;

//! Adds a bound of length <edgeNumber> and bound color <br>
//! coordinates in the bound array. <br>
//! returns the actual bounds number. <br>
//!  Warning: <R,G,B> are ignored when the <hasBColors> <br>
//! constructor parameter is FALSE <br>
 /*instead*/  Standard_Integer AddBound(Standard_Integer edgeNumber, Standard_Real R, Standard_Real G, Standard_Real B) ;

//! Adds an edge in the range [1,VertexNumber()] in the array, <br>
//! if <isVisible> is FALSE the edge between <vertexIndex> and <br>
//! the next edge will not be visible even if the SetEdgeOn() method <br>
//! is activated in Graphic3d_AspectFillArea3d class. <br>
//! returns the actual edges number. <br>
//!  Warning: <isVisible> is ignored when the <hasEdgeInfos> <br>
//! constructor parameter is FALSE. <br>
 /*instead*/  Standard_Integer AddEdge(Standard_Integer vertexIndex, System::Boolean isVisible) ;

//! Orientate correctly all vertexs & normals of this array <br>
//! according to the <aNormal> parameter and <br>
//! returns TRUE when something has change in the array. <br>
//!  Warning: When the array has edges this method is apply <br>
//! on edge sub array instead on vertex sub array. <br>
 /*instead*/  System::Boolean Orientate(OCNaroWrappers::OCgp_Dir^ aNormal) ;

//! Orientate correctly all vertexs & normal of the bound <aBound> <br>
//! according to the <aNormal> parameter and <br>
//! returns TRUE when something has change in the array. <br>
//!  Warning: When the array has edges this method is apply <br>
//! on edge sub array instead on vertex sub array. <br>
//! When this array has no bound, <aBoundIndex> design the item number <br>
 /*instead*/  System::Boolean Orientate(Standard_Integer aBoundIndex, OCNaroWrappers::OCgp_Dir^ aNormal) ;

//! Change the vertice of rank <anIndex> in the array. <br>
 /*instead*/  void SetVertice(Standard_Integer anIndex, OCNaroWrappers::OCgp_Pnt^ aVertice) ;

//! Change the vertice of rank <anIndex> in the array. <br>
 /*instead*/  void SetVertice(Standard_Integer anIndex, Standard_Real X, Standard_Real Y, Standard_Real Z) ;

//! Change the vertex color of rank <anIndex> in the array. <br>
 /*instead*/  void SetVertexColor(Standard_Integer anIndex, OCNaroWrappers::OCQuantity_Color^ aColor) ;

//! Change the vertex color of rank <anIndex> in the array. <br>
 /*instead*/  void SetVertexColor(Standard_Integer anIndex, Standard_Real R, Standard_Real G, Standard_Real B) ;

//! Change the vertex color of rank <anIndex> in the array. <br>
//! aColor = Alpha << 24 + Blue << 16 + Green << 8 + Red <br>
//! On all architecture proccers type (x86 or SPARC) you can <br>
//! use this byte order. <br>
 /*instead*/  void SetVertexColor(Standard_Integer anIndex, Standard_Integer aColor) ;

//! Change the vertex normal of rank <anIndex> in the array. <br>
 /*instead*/  void SetVertexNormal(Standard_Integer anIndex, OCNaroWrappers::OCgp_Dir^ aNormal) ;

//! Change the vertex normal of rank <anIndex> in the array. <br>
 /*instead*/  void SetVertexNormal(Standard_Integer anIndex, Standard_Real NX, Standard_Real NY, Standard_Real NZ) ;

//! Change the vertex texel of rank <anIndex> in the array. <br>
 /*instead*/  void SetVertexTexel(Standard_Integer anIndex, OCNaroWrappers::OCgp_Pnt2d^ aTexel) ;

//! Change the vertex texel of rank <anIndex> in the array. <br>
 /*instead*/  void SetVertexTexel(Standard_Integer anIndex, Standard_Real TX, Standard_Real TY) ;

//! Change the bound color of rank <anIndex> in the array. <br>
 /*instead*/  void SetBoundColor(Standard_Integer anIndex, OCNaroWrappers::OCQuantity_Color^ aColor) ;

//! Change the bound color of rank <anIndex> in the array. <br>
 /*instead*/  void SetBoundColor(Standard_Integer anIndex, Standard_Real R, Standard_Real G, Standard_Real B) ;

//! Returns the array address. <br>
 /*instead*/  Graphic3d_PrimitiveArray Array() ;

//! Returns the type of this primitive <br>
 /*instead*/  OCGraphic3d_TypeOfPrimitiveArray Type() ;

//! Returns the string type of this primitive <br>
 /*instead*/  System::String^ StringType() ;

//! Returns TRUE when vertex normals array is defined. <br>
 /*instead*/  System::Boolean HasVertexNormals() ;

//! Returns TRUE when vertex colors array is defined. <br>
 /*instead*/  System::Boolean HasVertexColors() ;

//! Returns TRUE when vertex texels array is defined. <br>
 /*instead*/  System::Boolean HasVertexTexels() ;

//! Returns the number of defined vertex <br>
 /*instead*/  Standard_Integer VertexNumber() ;

//! Returns the vertice at rank <aRank> <br>
//! from the vertex table if defined. <br>
 /*instead*/  OCgp_Pnt^ Vertice(Standard_Integer aRank) ;

//! Returns the vertice coordinates at rank <aRank> <br>
//! from the vertex table if defined. <br>
 /*instead*/  void Vertice(Standard_Integer aRank, Standard_Real& X, Standard_Real& Y, Standard_Real& Z) ;

//! Returns the vertex color at rank <aRank> <br>
//! from the vertex table if defined. <br>
 /*instead*/  OCQuantity_Color^ VertexColor(Standard_Integer aRank) ;

//! Returns the vertex color values at rank <aRank> <br>
//! from the vertex table if defined. <br>
 /*instead*/  void VertexColor(Standard_Integer aRank, Standard_Real& R, Standard_Real& G, Standard_Real& B) ;

//! Returns the vertex color values at rank <aRank> <br>
//! from the vertex table if defined. <br>
 /*instead*/  void VertexColor(Standard_Integer aRank, Standard_Integer& aColor) ;

//! Returns the vertex normal at rank <aRank> <br>
//! from the vertex table if defined. <br>
 /*instead*/  OCgp_Dir^ VertexNormal(Standard_Integer aRank) ;

//! Returns the vertex normal coordinates at rank <aRank> <br>
//! from the vertex table if defined. <br>
 /*instead*/  void VertexNormal(Standard_Integer aRank, Standard_Real& NX, Standard_Real& NY, Standard_Real& NZ) ;

//! Returns the vertex texture at rank <aRank> <br>
//! from the vertex table if defined. <br>
 /*instead*/  OCgp_Pnt2d^ VertexTexel(Standard_Integer aRank) ;

//! Returns the vertex texture coordinates at rank <aRank> <br>
//! from the vertex table if defined. <br>
 /*instead*/  void VertexTexel(Standard_Integer aRank, Standard_Real& TX, Standard_Real& TY) ;

//! Returns TRUE when edge visibillity array is defined. <br>
 /*instead*/  System::Boolean HasEdgeInfos() ;

//! Returns the number of defined edges <br>
 /*instead*/  Standard_Integer EdgeNumber() ;

//! Returns the vertex index at rank <aRank> <br>
//! in the range [1,VertexNumber()] <br>
 /*instead*/  Standard_Integer Edge(Standard_Integer aRank) ;

//! Returns TRUE when the edge at rank <aRank> <br>
//! is visible. <br>
 /*instead*/  System::Boolean EdgeIsVisible(Standard_Integer aRank) ;

//! Returns TRUE when bound colors array is defined. <br>
 /*instead*/  System::Boolean HasBoundColors() ;

//! Returns the number of defined bounds <br>
 /*instead*/  Standard_Integer BoundNumber() ;

//! Returns the edge number at rank <aRank>. <br>
 /*instead*/  Standard_Integer Bound(Standard_Integer aRank) ;

//! Returns the bound color at rank <aRank> <br>
//! from the bound table if defined. <br>
 /*instead*/  OCQuantity_Color^ BoundColor(Standard_Integer aRank) ;

//! Returns the bound color values at rank <aRank> <br>
//! from the bound table if defined. <br>
 /*instead*/  void BoundColor(Standard_Integer aRank, Standard_Real& R, Standard_Real& G, Standard_Real& B) ;

//! Returns the number of total items according to <br>
//!  the array type. <br>
 /*instead*/  Standard_Integer ItemNumber() ;

//! Enable to use the arrays of primitives <br>
//!  Warning: Updates the current value of the environment symbol <br>
//!  CSF_USE_ARRAY_OF_PRIMITIVES <br>
static /*instead*/  void Enable() ;

//! Disable to use the arrays of primitives <br>
//!  Warning: Updates the current value of the environment symbol <br>
//!  CSF_USE_ARRAY_OF_PRIMITIVES <br>
static /*instead*/  void Disable() ;

//! Returns TRUE when the arrays are enable to use. <br>
//!  Warning: The initial value can be defined seting the symbol <br>
//!  CSF_USE_ARRAY_OF_PRIMITIVES to "Yes" or "No" <br>
static /*instead*/  System::Boolean IsEnable() ;

//! Returns TRUE only when the contains of this array is <br>
//! available. <br>
 /*instead*/  System::Boolean IsValid() ;

~OCGraphic3d_ArrayOfPrimitives()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif