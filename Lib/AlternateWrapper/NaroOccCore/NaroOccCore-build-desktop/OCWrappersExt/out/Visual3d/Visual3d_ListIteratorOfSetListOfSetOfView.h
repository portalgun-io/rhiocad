// File generated by CPPExt (MPV)
//
#ifndef _Visual3d_ListIteratorOfSetListOfSetOfView_OCWrappers_HeaderFile
#define _Visual3d_ListIteratorOfSetListOfSetOfView_OCWrappers_HeaderFile

// include native header
#include <Visual3d_ListIteratorOfSetListOfSetOfView.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCVisual3d_SetListOfSetOfView;
ref class OCVisual3d_View;
ref class OCVisual3d_ListNodeOfSetListOfSetOfView;



public ref class OCVisual3d_ListIteratorOfSetListOfSetOfView  {

protected:
  Visual3d_ListIteratorOfSetListOfSetOfView* nativeHandle;
  OCVisual3d_ListIteratorOfSetListOfSetOfView(OCDummy^) {};

public:
  property Visual3d_ListIteratorOfSetListOfSetOfView* Handle
  {
    Visual3d_ListIteratorOfSetListOfSetOfView* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCVisual3d_ListIteratorOfSetListOfSetOfView(Visual3d_ListIteratorOfSetListOfSetOfView* nativeHandle);

// Methods PUBLIC


OCVisual3d_ListIteratorOfSetListOfSetOfView();


OCVisual3d_ListIteratorOfSetListOfSetOfView(OCNaroWrappers::OCVisual3d_SetListOfSetOfView^ L);


 /*instead*/  void Initialize(OCNaroWrappers::OCVisual3d_SetListOfSetOfView^ L) ;


 /*instead*/  System::Boolean More() ;


 /*instead*/  void Next() ;


 /*instead*/  OCVisual3d_View^ Value() ;

~OCVisual3d_ListIteratorOfSetListOfSetOfView()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
