// File generated by CPPExt (Transient)
//
#ifndef _Transfer_SequenceNodeOfSequenceOfBinder_OCWrappers_HeaderFile
#define _Transfer_SequenceNodeOfSequenceOfBinder_OCWrappers_HeaderFile

// include the wrapped class
#include <Transfer_SequenceNodeOfSequenceOfBinder.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"



namespace OCNaroWrappers
{

ref class OCTransfer_Binder;
ref class OCTransfer_SequenceOfBinder;



public ref class OCTransfer_SequenceNodeOfSequenceOfBinder : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCTransfer_SequenceNodeOfSequenceOfBinder(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTransfer_SequenceNodeOfSequenceOfBinder(Handle(Transfer_SequenceNodeOfSequenceOfBinder)* nativeHandle);

// Methods PUBLIC


OCTransfer_SequenceNodeOfSequenceOfBinder(OCNaroWrappers::OCTransfer_Binder^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCTransfer_Binder^ Value() ;

~OCTransfer_SequenceNodeOfSequenceOfBinder()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
