// File generated by CPPExt (MPV)
//
#ifndef _TColStd_StackOfReal_OCWrappers_HeaderFile
#define _TColStd_StackOfReal_OCWrappers_HeaderFile

// include native header
#include <TColStd_StackOfReal.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTColStd_StackIteratorOfStackOfReal;
ref class OCTColStd_StackNodeOfStackOfReal;



public ref class OCTColStd_StackOfReal  {

protected:
  TColStd_StackOfReal* nativeHandle;
  OCTColStd_StackOfReal(OCDummy^) {};

public:
  property TColStd_StackOfReal* Handle
  {
    TColStd_StackOfReal* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTColStd_StackOfReal(TColStd_StackOfReal* nativeHandle);

// Methods PUBLIC


OCTColStd_StackOfReal();


 /*instead*/  OCTColStd_StackOfReal^ Assign(OCNaroWrappers::OCTColStd_StackOfReal^ Other) ;


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  Standard_Integer Depth() ;


 /*instead*/  Standard_Real Top() ;


 /*instead*/  void Push(Standard_Real I) ;


 /*instead*/  void Pop() ;


 /*instead*/  Standard_Real ChangeTop() ;

~OCTColStd_StackOfReal()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif