// File generated by CPPExt (MPV)
//
#ifndef _TCollection_BasicMapIterator_OCWrappers_HeaderFile
#define _TCollection_BasicMapIterator_OCWrappers_HeaderFile

// include native header
#include <TCollection_BasicMapIterator.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTCollection_BasicMap;


//! This  class  provides    basic   services  for the <br>
//! iterators  on Maps. The  iterators  are  inherited <br>
//! from this one. <br>
//! <br>
//! The  iterator   contains  an   array   of pointers <br>
//! (buckets). Each bucket is a  pointer  on a node. A <br>
//! node contains a pointer on the next node. <br>
//! <br>
//! This class  provides also basic  services for  the <br>
//! implementation of Maps. <br>
//! A map iterator provides a step by step exploration of all <br>
//! entries of a map. After initialization of a concrete derived <br>
//! iterator, use in a loop: <br>
//! -   the function More to know if there is a current entry for <br>
//!   the iterator in the map, <br>
//! -   then the functions which read data on an entry of the <br>
//!   map (these functions are provided by each type of map), <br>
//! -   then the function Next to set the iterator to the next   entry of the map. <br>
//!   Warning <br>
//! -   A map is a non-ordered data structure. The order in <br>
//!   which entries of a map are explored by the iterator <br>
//!  depends on its contents, and change when the map is edited. <br>
//! -   It is not recommended to modify the contents of a map <br>
//!   during iteration: the result is unpredictable. <br>
public ref class OCTCollection_BasicMapIterator  {

protected:
  TCollection_BasicMapIterator* nativeHandle;
  OCTCollection_BasicMapIterator(OCDummy^) {};

public:
  property TCollection_BasicMapIterator* Handle
  {
    TCollection_BasicMapIterator* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTCollection_BasicMapIterator(TCollection_BasicMapIterator* nativeHandle);

// Methods PUBLIC

//! Creates an empty iterator. <br>
OCTCollection_BasicMapIterator();

//! Initialize on the first node in the buckets. <br>
OCTCollection_BasicMapIterator(OCNaroWrappers::OCTCollection_BasicMap^ M);

//! Resets the iterator to the first node. <br>
 /*instead*/  void Reset() ;

//! Returns true if there is a current entry for this iterator in the map. <br>
//! Use the function Next to set this iterator to the position of <br>
//! the next entry, if it exists. <br>
 /*instead*/  System::Boolean More() ;

//! Sets this iterator to the position of the next entry of the map. <br>
//! Nothing is changed if there is no more entry to explore in <br>
//! the map: this iterator is always positioned on the last entry <br>
//! of the map but the function More returns false. <br>
 /*instead*/  void Next() ;

~OCTCollection_BasicMapIterator()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif