// File generated by CPPExt (Transient)
//
#ifndef _TDF_Data_OCWrappers_HeaderFile
#define _TDF_Data_OCWrappers_HeaderFile

// include the wrapped class
#include <TDF_Data.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "../TColStd/TColStd_StackOfInteger.h"
#include "TDF_Label.h"


namespace OCNaroWrappers
{

ref class OCTDF_Transaction;
ref class OCTDF_LabelNode;
ref class OCTDF_Delta;
ref class OCTDF_Label;


//! This class is used to manipulate a complete <br>
//!          independant, self sufficient data structure and <br>
//!          its services: <br>
//! <br>
//!          Access to the root label; <br>
//! <br>
//!          Opens, aborts, commits a transaction; <br>
//! <br>
//!          Generation and use of Delta, depending on the time. <br>
//! This class uses a special allocator <br>
//! (see LabelNodeAllocator() method) <br>
//!  for more efficient allocation of <br>
//!  objects in memory. <br>
public ref class OCTDF_Data : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCTDF_Data(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDF_Data(Handle(TDF_Data)* nativeHandle);

// Methods PUBLIC

//! A new and empty Data structure. <br>
OCTDF_Data();

//! Returns the root label of the Data structure. <br>
//! <br>
 /*instead*/  OCTDF_Label^ Root() ;

//! Returns the current transaction number. <br>
 /*instead*/  Standard_Integer Transaction() ;

//! Returns the current tick. It is incremented each Commit. <br>
//! <br>
 /*instead*/  Standard_Integer Time() ;

//! Returns true if <aDelta> is applicable HERE and NOW. <br>
 /*instead*/  System::Boolean IsApplicable(OCNaroWrappers::OCTDF_Delta^ aDelta) ;

//! Apply <aDelta> to undo a set of attribute <br>
//!          modifications. <br>
//! <br>
//!          Optionnal <withDelta> set to True indiquates a <br>
//!          Delta Set must be generated. (See above) <br>
 /*instead*/  OCTDF_Delta^ Undo(OCNaroWrappers::OCTDF_Delta^ aDelta, System::Boolean withDelta) ;

//! Returns the undo mode status. <br>
//! <br>
 /*instead*/  System::Boolean NotUndoMode() ;

//! Dumps the Data on <aStream>. <br>
//! <br>
 /*instead*/  Standard_OStream& Dump(Standard_OStream& anOS) ;

//! Sets modification mode. <br>
//! <br>
 /*instead*/  void AllowModification(System::Boolean isAllowed) ;

//! returns modification mode. <br>
//! <br>
 /*instead*/  System::Boolean IsModificationAllowed() ;

//! Returns TDF_HAllocator, which is an <br>
//! incremental allocator used by <br>
//! TDF_LabelNode. <br>
//!      This allocator is used to <br>
//!      manage TDF_LabelNode objects, <br>
//!      but it can also be used for <br>
//!      allocating memory to <br>
//!      application-specific data (be <br>
//!      careful because this <br>
//!      allocator does not release <br>
//!      the memory). <br>
//!      The benefits of this <br>
//!      allocation scheme are <br>
//!      noticeable when dealing with <br>
//!      large OCAF documents, due to: <br>
//! 1.    Very quick allocation of <br>
//!   objects (memory heap is not <br>
//!   used, the algorithm that <br>
//!   replaces it is very simple). <br>
//! 2.    Very quick destruction of <br>
//!   objects (memory is released not <br>
//!   by destructors of TDF_LabelNode, <br>
//!   but rather by the destructor of <br>
//!   TDF_Data). <br>
//! 3.  TDF_LabelNode objects do not <br>
//!   fragmentize the memory; they are <br>
//!   kept compactly in a number of <br>
//!   arrays of 16K each. <br>
//! 4.    Swapping is reduced on large <br>
//!   data, because each document now <br>
//!   occupies a smaller number of <br>
//!   memory pages. <br>
 /*instead*/  TDF_HAllocator& LabelNodeAllocator() ;

~OCTDF_Data()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif