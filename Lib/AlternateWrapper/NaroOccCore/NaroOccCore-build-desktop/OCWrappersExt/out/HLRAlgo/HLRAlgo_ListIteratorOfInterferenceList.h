// File generated by CPPExt (MPV)
//
#ifndef _HLRAlgo_ListIteratorOfInterferenceList_OCWrappers_HeaderFile
#define _HLRAlgo_ListIteratorOfInterferenceList_OCWrappers_HeaderFile

// include native header
#include <HLRAlgo_ListIteratorOfInterferenceList.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCHLRAlgo_InterferenceList;
ref class OCHLRAlgo_Interference;
ref class OCHLRAlgo_ListNodeOfInterferenceList;



public ref class OCHLRAlgo_ListIteratorOfInterferenceList  {

protected:
  HLRAlgo_ListIteratorOfInterferenceList* nativeHandle;
  OCHLRAlgo_ListIteratorOfInterferenceList(OCDummy^) {};

public:
  property HLRAlgo_ListIteratorOfInterferenceList* Handle
  {
    HLRAlgo_ListIteratorOfInterferenceList* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCHLRAlgo_ListIteratorOfInterferenceList(HLRAlgo_ListIteratorOfInterferenceList* nativeHandle);

// Methods PUBLIC


OCHLRAlgo_ListIteratorOfInterferenceList();


OCHLRAlgo_ListIteratorOfInterferenceList(OCNaroWrappers::OCHLRAlgo_InterferenceList^ L);


 /*instead*/  void Initialize(OCNaroWrappers::OCHLRAlgo_InterferenceList^ L) ;


 /*instead*/  System::Boolean More() ;


 /*instead*/  void Next() ;


 /*instead*/  OCHLRAlgo_Interference^ Value() ;

~OCHLRAlgo_ListIteratorOfInterferenceList()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif