// File generated by CPPExt (Transient)
//
#ifndef _TColStd_ListNodeOfListOfTransient_OCWrappers_HeaderFile
#define _TColStd_ListNodeOfListOfTransient_OCWrappers_HeaderFile

// include the wrapped class
#include <TColStd_ListNodeOfListOfTransient.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"



namespace OCNaroWrappers
{

ref class OCStandard_Transient;
ref class OCTColStd_ListOfTransient;
ref class OCTColStd_ListIteratorOfListOfTransient;



public ref class OCTColStd_ListNodeOfListOfTransient : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCTColStd_ListNodeOfListOfTransient(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColStd_ListNodeOfListOfTransient(Handle(TColStd_ListNodeOfListOfTransient)* nativeHandle);

// Methods PUBLIC


OCTColStd_ListNodeOfListOfTransient(OCNaroWrappers::OCStandard_Transient^ I, TCollection_MapNodePtr n);


 /*instead*/  OCStandard_Transient^ Value() ;

~OCTColStd_ListNodeOfListOfTransient()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif