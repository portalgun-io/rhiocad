// File generated by CPPExt (MPV)
//
#ifndef _Law_ListIteratorOfLaws_OCWrappers_HeaderFile
#define _Law_ListIteratorOfLaws_OCWrappers_HeaderFile

// include native header
#include <Law_ListIteratorOfLaws.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCLaw_Laws;
ref class OCLaw_Function;
ref class OCLaw_ListNodeOfLaws;



public ref class OCLaw_ListIteratorOfLaws  {

protected:
  Law_ListIteratorOfLaws* nativeHandle;
  OCLaw_ListIteratorOfLaws(OCDummy^) {};

public:
  property Law_ListIteratorOfLaws* Handle
  {
    Law_ListIteratorOfLaws* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCLaw_ListIteratorOfLaws(Law_ListIteratorOfLaws* nativeHandle);

// Methods PUBLIC


OCLaw_ListIteratorOfLaws();


OCLaw_ListIteratorOfLaws(OCNaroWrappers::OCLaw_Laws^ L);


 /*instead*/  void Initialize(OCNaroWrappers::OCLaw_Laws^ L) ;


 /*instead*/  System::Boolean More() ;


 /*instead*/  void Next() ;


 /*instead*/  OCLaw_Function^ Value() ;

~OCLaw_ListIteratorOfLaws()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif