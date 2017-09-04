// File generated by CPPExt (Transient)
//
#ifndef _TDataStd_ExtStringList_OCWrappers_HeaderFile
#define _TDataStd_ExtStringList_OCWrappers_HeaderFile

// include the wrapped class
#include <TDataStd_ExtStringList.hxx>
#include "../Converter.h"

#include "../TDF/TDF_Attribute.h"

#include "TDataStd_ListOfExtendedString.h"


namespace OCNaroWrappers
{

ref class OCStandard_GUID;
ref class OCTDF_Label;
ref class OCTCollection_ExtendedString;
ref class OCTDataStd_ListOfExtendedString;
ref class OCTDF_Attribute;
ref class OCTDF_RelocationTable;


//! Contains a list of ExtendedString. <br>
public ref class OCTDataStd_ExtStringList : OCTDF_Attribute {

protected:
  // dummy constructor;
  OCTDataStd_ExtStringList(OCDummy^) : OCTDF_Attribute((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDataStd_ExtStringList(Handle(TDataStd_ExtStringList)* nativeHandle);

// Methods PUBLIC

//! Static methods <br>
//!          ============== <br>//! Returns the ID of the list of strings attribute. <br>
static /*instead*/  OCStandard_GUID^ GetID() ;

//! Finds or creates a list of string values attribute. <br>
static /*instead*/  OCTDataStd_ExtStringList^ Set(OCNaroWrappers::OCTDF_Label^ label) ;


OCTDataStd_ExtStringList();


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  Standard_Integer Extent() ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTCollection_ExtendedString^ value) ;


 /*instead*/  void Append(OCNaroWrappers::OCTCollection_ExtendedString^ value) ;

//! Inserts the <value> before the first meet of <before_value>. <br>
 /*instead*/  System::Boolean InsertBefore(OCNaroWrappers::OCTCollection_ExtendedString^ value, OCNaroWrappers::OCTCollection_ExtendedString^ before_value) ;

//! Inserts the <value> after the first meet of <after_value>. <br>
 /*instead*/  System::Boolean InsertAfter(OCNaroWrappers::OCTCollection_ExtendedString^ value, OCNaroWrappers::OCTCollection_ExtendedString^ after_value) ;

//! Removes the first meet of the <value>. <br>
 /*instead*/  System::Boolean Remove(OCNaroWrappers::OCTCollection_ExtendedString^ value) ;


 /*instead*/  void Clear() ;


 /*instead*/  OCTCollection_ExtendedString^ First() ;


 /*instead*/  OCTCollection_ExtendedString^ Last() ;


 /*instead*/  OCTDataStd_ListOfExtendedString^ List() ;


 /*instead*/  OCStandard_GUID^ ID() ;


 /*instead*/  void Restore(OCNaroWrappers::OCTDF_Attribute^ With) ;


 /*instead*/  OCTDF_Attribute^ NewEmpty() ;


 /*instead*/  void Paste(OCNaroWrappers::OCTDF_Attribute^ Into, OCNaroWrappers::OCTDF_RelocationTable^ RT) ;


virtual /*instead*/  Standard_OStream& Dump(Standard_OStream& anOS) override;

~OCTDataStd_ExtStringList()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif