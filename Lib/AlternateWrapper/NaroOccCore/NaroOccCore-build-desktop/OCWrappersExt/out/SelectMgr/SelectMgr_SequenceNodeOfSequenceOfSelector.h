// File generated by CPPExt (Transient)
//
#ifndef _SelectMgr_SequenceNodeOfSequenceOfSelector_OCWrappers_HeaderFile
#define _SelectMgr_SequenceNodeOfSequenceOfSelector_OCWrappers_HeaderFile

// include the wrapped class
#include <SelectMgr_SequenceNodeOfSequenceOfSelector.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"



namespace OCNaroWrappers
{

ref class OCSelectMgr_ViewerSelector;
ref class OCSelectMgr_SequenceOfSelector;



public ref class OCSelectMgr_SequenceNodeOfSequenceOfSelector : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCSelectMgr_SequenceNodeOfSequenceOfSelector(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCSelectMgr_SequenceNodeOfSequenceOfSelector(Handle(SelectMgr_SequenceNodeOfSequenceOfSelector)* nativeHandle);

// Methods PUBLIC


OCSelectMgr_SequenceNodeOfSequenceOfSelector(OCNaroWrappers::OCSelectMgr_ViewerSelector^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCSelectMgr_ViewerSelector^ Value() ;

~OCSelectMgr_SequenceNodeOfSequenceOfSelector()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif