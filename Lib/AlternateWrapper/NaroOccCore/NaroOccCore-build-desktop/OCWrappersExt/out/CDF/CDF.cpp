// File generated by CPPExt (CPP file)
//

#include "CDF.h"
#include "../Converter.h"


using namespace OCNaroWrappers;



 void OCCDF::GetLicense(Standard_Integer anApplicationIdentifier)
{
  CDF::GetLicense(anApplicationIdentifier);
}

 System::Boolean OCCDF::IsAvailable(Standard_Integer anApplicationIdentifier)
{
  return OCConverter::StandardBooleanToBoolean(CDF::IsAvailable(anApplicationIdentifier));
}

