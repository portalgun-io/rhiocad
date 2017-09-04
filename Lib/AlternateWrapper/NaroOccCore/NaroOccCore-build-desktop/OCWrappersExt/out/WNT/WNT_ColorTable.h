// File generated by CPPExt (MPV)
//
#ifndef _WNT_ColorTable_OCWrappers_HeaderFile
#define _WNT_ColorTable_OCWrappers_HeaderFile

// include native header
#include <WNT_ColorTable.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{




public ref class OCWNT_ColorTable  {

protected:
  WNT_ColorTable* nativeHandle;
  OCWNT_ColorTable(OCDummy^) {};

public:
  property WNT_ColorTable* Handle
  {
    WNT_ColorTable* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCWNT_ColorTable(WNT_ColorTable* nativeHandle);

// Methods PUBLIC


OCWNT_ColorTable(Standard_Integer Low, Standard_Integer Up);


OCWNT_ColorTable(WNT_ColorRef Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(WNT_ColorRef V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCWNT_ColorTable^ Assign(OCNaroWrappers::OCWNT_ColorTable^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, WNT_ColorRef Value) ;


 /*instead*/  WNT_ColorRef Value(Standard_Integer Index) ;


 /*instead*/  WNT_ColorRef ChangeValue(Standard_Integer Index) ;

~OCWNT_ColorTable()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif