// File generated by CPPExt (Transient)
//
#ifndef _IFSelect_ShareOut_OCWrappers_HeaderFile
#define _IFSelect_ShareOut_OCWrappers_HeaderFile

// include the wrapped class
#include <IFSelect_ShareOut.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "IFSelect_TSeqOfDispatch.h"
#include "IFSelect_SequenceOfGeneralModifier.h"


namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;
ref class OCStandard_Transient;
ref class OCIFSelect_Dispatch;
ref class OCIFSelect_GeneralModifier;
ref class OCIFSelect_Modifier;
ref class OCTCollection_AsciiString;


//! This class gathers the informations required to produce one or <br>
//!           several file(s) from the content of an InterfaceModel (passing <br>
//!           through the creation of intermediate Models). <br>
//! <br>
//!           It can correspond to a complete Divide up of a set of Entities <br>
//!           intended to be exhaustive and to limit duplications. Or to a <br>
//!           simple Extraction of some Entities, in order to work on them. <br>
//! <br>
//!           A ShareOut is composed of a list of Dispatches. <br>
//!           To Each Dispatch in the ShareOut, is bound an Id. Number <br>
//!           This Id. Number allows to identify a Display inside the <br>
//!           ShareOut in a stable way (for instance, to attach file names) <br>
//! <br>
//!           ShareOut can be seen as a "passive" description, activated <br>
//!           through a ShareOutResult, which gives the InterfaceModel on <br>
//!           which to work, as a unique source. Thus it is easy to change <br>
//!           it without coherence problems <br>
//! <br>
//!           Services about it are provided by the class ShareOutResult <br>
//!           which is a service class : simulation (list of files and of <br>
//!           entities per file; "forgotten" entities; duplicated entities), <br>
//!           exploitation (generation of derivated Models, each of them <br>
//!           generating an output file) <br>
public ref class OCIFSelect_ShareOut : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCIFSelect_ShareOut(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCIFSelect_ShareOut(Handle(IFSelect_ShareOut)* nativeHandle);

// Methods PUBLIC

//! Creates an empty ShareOut <br>
OCIFSelect_ShareOut();

//! Removes in one operation all the Dispatches with their Idents <br>
//!           Also clears all informations about Names, and all Results but <br>
//!           naming informations which are : <br>
//!           - kept if <onlydisp> is True. <br>
//!           - cleared if <onlydisp> is False (complete clearing) <br>
//!           If <onlydisp> is True, that's all. Else, clears also Modifiers <br>
 /*instead*/  void Clear(System::Boolean onlydisp) ;

//! Clears all data produced (apart from Dispatches, etc...) <br>
//!           if <alsoname> is True, all is cleared. Else, informations <br>
//!           about produced Names are kept (to maintain unicity of naming <br>
//!           across clearings) <br>
 /*instead*/  void ClearResult(System::Boolean alsoname) ;

//! Removes an item, which can be, either a Dispatch (removed from <br>
//!           the list of Dispatches), or a GeneralModifier (removed from <br>
//!           the list of Model Modifiers or from the list of File Modifiers <br>
//!           according to its type). <br>
//!           Returns True if done, False if has not been found or if it is <br>
//!           neither a Dispatch, nor a Modifier. <br>
 /*instead*/  System::Boolean RemoveItem(OCNaroWrappers::OCStandard_Transient^ item) ;

//! Returns the rank of last run item (ClearResult resets it to 0) <br>
 /*instead*/  Standard_Integer LastRun() ;

//! Records a new alue for the rank of last run item <br>
 /*instead*/  void SetLastRun(Standard_Integer last) ;

//! Returns the count of Dispatches <br>
 /*instead*/  Standard_Integer NbDispatches() ;

//! Returns the Rank of a Dispatch, given its Value (Handle). <br>
//!           Returns 0 if the Dispatch is unknown in the ShareOut <br>
 /*instead*/  Standard_Integer DispatchRank(OCNaroWrappers::OCIFSelect_Dispatch^ disp) ;

//! Returns a Dispatch, given its rank in the list <br>
 /*instead*/  OCIFSelect_Dispatch^ Dispatch(Standard_Integer num) ;

//! Adds a Dispatch to the list <br>
 /*instead*/  void AddDispatch(OCNaroWrappers::OCIFSelect_Dispatch^ disp) ;

//! Removes a Dispatch, given its rank in the list <br>
//!           Returns True if done, False if rank is not between <br>
//!           (LastRun + 1) and (NbDispatches) <br>
 /*instead*/  System::Boolean RemoveDispatch(Standard_Integer rank) ;

//! Sets a Modifier to be applied on all Dispatches to be run <br>
//!           If <modifier> is a ModelModifier, adds it to the list of <br>
//!           Model Modifiers; else to the list of File Modifiers <br>
//!           By default (atnum = 0) at the end of the list, else at <atnum> <br>
//!           Each Modifier is used, after each copy of a packet of Entities <br>
//!           into a Model : its criteria are checked and if they are OK, <br>
//!           the method Perform of this Modifier is run. <br>
 /*instead*/  void AddModifier(OCNaroWrappers::OCIFSelect_GeneralModifier^ modifier, Standard_Integer atnum) ;

//! Sets a Modifier to be applied on the Dispatch <dispnum> <br>
//!           If <modifier> is a ModelModifier, adds it to the list of <br>
//!           Model Modifiers; else to the list of File Modifiers <br>
//!           This is the same list as for all Dispatches, but the <br>
//!           Modifier is qualified to be applied to one Dispatch only <br>
//!           Then, <atnum> refers to the entire list <br>
//!           By default (atnum = 0) at the end of the list, else at <atnum> <br>
//!           Remark : if the Modifier was already in the list and if <br>
//!             <atnum> = 0, the Modifier is not moved, but only qualified <br>
//!             for a Dispatch <br>
 /*instead*/  void AddModifier(OCNaroWrappers::OCIFSelect_GeneralModifier^ modifier, Standard_Integer dispnum, Standard_Integer atnum) ;

//! Adds a Modifier to the list of Modifiers : Model Modifiers if <br>
//!           <formodel> is True, File Modifiers else (internal). <br>
 /*instead*/  void AddModif(OCNaroWrappers::OCIFSelect_GeneralModifier^ modifier, System::Boolean formodel, Standard_Integer atnum) ;

//! Returns count of Modifiers (which apply to complete Models) : <br>
//!           Model Modifiers if <formodel> is True, File Modifiers else <br>
 /*instead*/  Standard_Integer NbModifiers(System::Boolean formodel) ;

//! Returns a Modifier of the list, given its rank : <br>
//!           Model Modifiers if <formodel> is True, File Modifiers else <br>
 /*instead*/  OCIFSelect_GeneralModifier^ GeneralModifier(System::Boolean formodel, Standard_Integer num) ;

//! Returns a Modifier of the list of Model Modifiers, duely casted <br>
 /*instead*/  OCIFSelect_Modifier^ ModelModifier(Standard_Integer num) ;

//! Gives the rank of a Modifier in the list, 0 if not in the list <br>
//!           Model Modifiers if <modifier> is kind of ModelModifer, <br>
//!           File Modifiers else <br>
 /*instead*/  Standard_Integer ModifierRank(OCNaroWrappers::OCIFSelect_GeneralModifier^ modifier) ;

//! Removes a Modifier, given it rank in the list : <br>
//!           Model Modifiers if <formodel> is True, File Modifiers else <br>
//!           Returns True if done, False if <num> is out of range <br>
 /*instead*/  System::Boolean RemoveModifier(System::Boolean formodel, Standard_Integer num) ;

//! Changes the rank of a modifier in the list : <br>
//!           Model Modifiers if <formodel> is True, File Modifiers else <br>
//!           from <before> to <after> <br>
//!           Returns True if done, False else (before or after out of range) <br>
 /*instead*/  System::Boolean ChangeModifierRank(System::Boolean formodel, Standard_Integer befor, Standard_Integer after) ;

//! Attaches a Root Name to a Dispatch given its rank, as an <br>
//!           HAsciiString (standard form). A Null Handle resets this name. <br>
//!           Returns True if OK, False if this Name is already attached, <br>
//!           for a Dispatch or for Default, or <num> out of range <br>
 /*instead*/  System::Boolean SetRootName(Standard_Integer num, OCNaroWrappers::OCTCollection_HAsciiString^ name) ;

//! Returns True if the Dispatch of rank <num> has an attached <br>
//!           Root Name. False else, or if num is out of range <br>
 /*instead*/  System::Boolean HasRootName(Standard_Integer num) ;

//! Returns the Root bound to a Dispatch, given its rank <br>
//!           Returns a Null Handle if not defined <br>
 /*instead*/  OCTCollection_HAsciiString^ RootName(Standard_Integer num) ;

//! Returns an integer value about a given root name : <br>
//!           - positive : it's the rank of the Dispatch which has this name <br>
//!           - null : this root name is unknown <br>
//!           - negative (-1) : this root name is the default root name <br>
 /*instead*/  Standard_Integer RootNumber(OCNaroWrappers::OCTCollection_HAsciiString^ name) ;

//! Defines or Changes the general Prefix (which is prepended to <br>
//!           complete file name generated). If this method is not call, <br>
//!           Prefix remains empty <br>
 /*instead*/  void SetPrefix(OCNaroWrappers::OCTCollection_HAsciiString^ pref) ;

//! Defines or Changes the Default Root Name to a new value (which <br>
//!           is used for dispatches which have no attached root name). <br>
//!           If this method is not called, DefaultRootName remains empty <br>
//!           Returns True if OK, False if this Name is already attached, <br>
//!           for a Dispatch or for Default <br>
 /*instead*/  System::Boolean SetDefaultRootName(OCNaroWrappers::OCTCollection_HAsciiString^ defrt) ;

//! Defines or Changes the general Extension (which is appended to <br>
//!           complete file name generated). If this method is not call, <br>
//!           Extension remains empty <br>
 /*instead*/  void SetExtension(OCNaroWrappers::OCTCollection_HAsciiString^ ext) ;

//! Returns the general Prefix. Can be empty. <br>
 /*instead*/  OCTCollection_HAsciiString^ Prefix() ;

//! Returns the Default Root Name. Can be empty. <br>
 /*instead*/  OCTCollection_HAsciiString^ DefaultRootName() ;

//! Returns the general Extension. Can be empty (not recommanded) <br>
 /*instead*/  OCTCollection_HAsciiString^ Extension() ;

//! Computes the complete file name for a Packet of a Dispatch, <br>
//!           given Dispatch Number (Rank), Packet Number, and Count of <br>
//!           Packets generated by this Dispatch (0 if unknown) <br>
//! <br>
//!           File Name is made of following strings, concatenated : <br>
//!           General Prefix, Root Name for Dispatch, Packet Suffix, and <br>
//!           General Extension. If no Root Name is specified for a <br>
//!           Dispatch, DefaultRootName is considered (and pnum is not used, <br>
//!           but <thenbdefs> is incremented and used <br>
//!           Error if no Root is defined for this <idnum> <br>
 /*instead*/  OCTCollection_AsciiString^ FileName(Standard_Integer dnum, Standard_Integer pnum, Standard_Integer nbpack) ;

~OCIFSelect_ShareOut()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
