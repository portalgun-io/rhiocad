// File generated by CPPExt (CPP file)
//

#include "CDM_Application.h"
#include "../Converter.h"
#include "CDM_Reference.h"
#include "CDM_MetaData.h"
#include "CDM_Document.h"
#include "../Resource/Resource_Manager.h"
#include "CDM_MessageDriver.h"
#include "../TCollection/TCollection_ExtendedString.h"


using namespace OCNaroWrappers;

OCCDM_Application::OCCDM_Application(Handle(CDM_Application)* nativeHandle) : OCStandard_Transient((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_CDM_Application(*nativeHandle);
}

OCCDM_MessageDriver^ OCCDM_Application::MessageDriver()
{
  Handle(CDM_MessageDriver) tmp = (*((Handle_CDM_Application*)nativeHandle))->MessageDriver();
  return gcnew OCCDM_MessageDriver(&tmp);
}

 void OCCDM_Application::BeginOfUpdate(OCNaroWrappers::OCCDM_Document^ aDocument)
{
  (*((Handle_CDM_Application*)nativeHandle))->BeginOfUpdate(*((Handle_CDM_Document*)aDocument->Handle));
}

 void OCCDM_Application::EndOfUpdate(OCNaroWrappers::OCCDM_Document^ aDocument, System::Boolean Status, OCNaroWrappers::OCTCollection_ExtendedString^ ErrorString)
{
  (*((Handle_CDM_Application*)nativeHandle))->EndOfUpdate(*((Handle_CDM_Document*)aDocument->Handle), OCConverter::BooleanToStandardBoolean(Status), *((TCollection_ExtendedString*)ErrorString->Handle));
}

 void OCCDM_Application::Write(System::String^ aString)
{
  (*((Handle_CDM_Application*)nativeHandle))->Write(OCConverter::StringToStandardExtString(aString));
}

