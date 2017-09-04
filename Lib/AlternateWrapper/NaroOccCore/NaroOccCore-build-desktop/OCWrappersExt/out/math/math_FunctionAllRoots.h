// File generated by CPPExt (MPV)
//
#ifndef _math_FunctionAllRoots_OCWrappers_HeaderFile
#define _math_FunctionAllRoots_OCWrappers_HeaderFile

// include native header
#include <math_FunctionAllRoots.hxx>
#include "../Converter.h"


#include "../TColStd/TColStd_SequenceOfReal.h"
#include "../TColStd/TColStd_SequenceOfInteger.h"


namespace OCNaroWrappers
{

ref class OCmath_FunctionWithDerivative;
ref class OCmath_FunctionSample;


//! This algorithm uses a sample of the function to find <br>
//!          all intervals on which the function is null, and afterwards <br>
//!          uses the FunctionRoots algorithm to find the points <br>
//!          where the function is null outside the "null intervals". <br>
//! Knowledge of the derivative is required. <br>
public ref class OCmath_FunctionAllRoots  {

protected:
  math_FunctionAllRoots* nativeHandle;
  OCmath_FunctionAllRoots(OCDummy^) {};

public:
  property math_FunctionAllRoots* Handle
  {
    math_FunctionAllRoots* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCmath_FunctionAllRoots(math_FunctionAllRoots* nativeHandle);

// Methods PUBLIC

//! The algorithm uses the sample to find intervals on which <br>
//!          the function is null. An interval is found if, for at least <br>
//!          two consecutive points of the sample, Ui and Ui+1, we get <br>
//!          |F(Ui)|<=EpsNul and |F(Ui+1)|<=EpsNul. The real bounds of <br>
//!          an interval are computed with the FunctionRoots. <br>
//!          algorithm. <br>
//!          Between two intervals, the roots of the function F are <br>
//!          calculated using the FunctionRoots algorithm. <br>
OCmath_FunctionAllRoots(OCNaroWrappers::OCmath_FunctionWithDerivative^ F, OCNaroWrappers::OCmath_FunctionSample^ S, Standard_Real EpsX, Standard_Real EpsF, Standard_Real EpsNul);

//! Returns True if the computation has been done successfully. <br>
 /*instead*/  System::Boolean IsDone() ;

//! Returns the number of intervals on which the function <br>
//!          is Null. <br>
//!          An exception is raised if IsDone returns False. <br>
 /*instead*/  Standard_Integer NbIntervals() ;

//! Returns the interval of parameter of range Index. <br>
//!          An exception is raised if IsDone returns False; <br>
//!          An exception is raised if Index<=0 or Index >Nbintervals. <br>
 /*instead*/  void GetInterval(Standard_Integer Index, Standard_Real& A, Standard_Real& B) ;

//! returns the State Number associated to the interval Index. <br>
//!          An exception is raised if IsDone returns False; <br>
//!          An exception is raised if Index<=0 or Index >Nbintervals. <br>
 /*instead*/  void GetIntervalState(Standard_Integer Index, Standard_Integer& IFirst, Standard_Integer& ILast) ;

//! returns the number of points where the function is Null. <br>
//!          An exception is raised if IsDone returns False. <br>
 /*instead*/  Standard_Integer NbPoints() ;

//! Returns the parameter of the point of range Index. <br>
//!          An exception is raised if IsDone returns False; <br>
//!          An exception is raised if Index<=0 or Index >NbPoints. <br>
 /*instead*/  Standard_Real GetPoint(Standard_Integer Index) ;

//! returns the State Number associated to the point Index. <br>
//!          An exception is raised if IsDone returns False; <br>
//!          An exception is raised if Index<=0 or Index >Nbintervals. <br>
 /*instead*/  Standard_Integer GetPointState(Standard_Integer Index) ;

//! Prints on the stream o information on the current state <br>
//!          of the object. <br>
 /*instead*/  void Dump(Standard_OStream& o) ;

~OCmath_FunctionAllRoots()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif