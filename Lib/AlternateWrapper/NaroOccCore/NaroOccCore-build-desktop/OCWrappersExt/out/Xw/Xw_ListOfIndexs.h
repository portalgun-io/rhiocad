// File generated by CPPExt (MPV)
//
#ifndef _Xw_ListOfIndexs_OCWrappers_HeaderFile
#define _Xw_ListOfIndexs_OCWrappers_HeaderFile

// include native header
#include <Xw_ListOfIndexs.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{




public ref class OCXw_ListOfIndexs  {

protected:
  Xw_ListOfIndexs* nativeHandle;
  OCXw_ListOfIndexs(OCDummy^) {};

public:
  property Xw_ListOfIndexs* Handle
  {
    Xw_ListOfIndexs* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCXw_ListOfIndexs(Xw_ListOfIndexs* nativeHandle);

// Methods PUBLIC


OCXw_ListOfIndexs(Standard_Integer Low, Standard_Integer Up);


OCXw_ListOfIndexs(Standard_Integer Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(Standard_Integer V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCXw_ListOfIndexs^ Assign(OCNaroWrappers::OCXw_ListOfIndexs^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, Standard_Integer Value) ;


 /*instead*/  Standard_Integer Value(Standard_Integer Index) ;


 /*instead*/  Standard_Integer ChangeValue(Standard_Integer Index) ;

~OCXw_ListOfIndexs()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif