// File generated by CPPExt (Transient)
//
#ifndef _Extrema_SequenceNodeOfSeqPOnCOfCCFOfELCCOfLocateExtCC_OCWrappers_HeaderFile
#define _Extrema_SequenceNodeOfSeqPOnCOfCCFOfELCCOfLocateExtCC_OCWrappers_HeaderFile

// include the wrapped class
#include <Extrema_SequenceNodeOfSeqPOnCOfCCFOfELCCOfLocateExtCC.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"

#include "Extrema_POnCurv.h"


namespace OCNaroWrappers
{

ref class OCExtrema_POnCurv;
ref class OCExtrema_SeqPOnCOfCCFOfELCCOfLocateExtCC;



public ref class OCExtrema_SequenceNodeOfSeqPOnCOfCCFOfELCCOfLocateExtCC : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCExtrema_SequenceNodeOfSeqPOnCOfCCFOfELCCOfLocateExtCC(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCExtrema_SequenceNodeOfSeqPOnCOfCCFOfELCCOfLocateExtCC(Handle(Extrema_SequenceNodeOfSeqPOnCOfCCFOfELCCOfLocateExtCC)* nativeHandle);

// Methods PUBLIC


OCExtrema_SequenceNodeOfSeqPOnCOfCCFOfELCCOfLocateExtCC(OCNaroWrappers::OCExtrema_POnCurv^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCExtrema_POnCurv^ Value() ;

~OCExtrema_SequenceNodeOfSeqPOnCOfCCFOfELCCOfLocateExtCC()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif