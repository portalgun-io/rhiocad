// File generated by CPPExt (CPP file)
//

#include "ChFiDS_StripeMap.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Vertex.h"
#include "ChFiDS_Stripe.h"
#include "ChFiDS_ListOfStripe.h"


using namespace OCNaroWrappers;

OCChFiDS_StripeMap::OCChFiDS_StripeMap(ChFiDS_StripeMap* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCChFiDS_StripeMap::OCChFiDS_StripeMap() 
{
  nativeHandle = new ChFiDS_StripeMap();
}

 void OCChFiDS_StripeMap::Add(OCNaroWrappers::OCTopoDS_Vertex^ V, OCNaroWrappers::OCChFiDS_Stripe^ F)
{
  ((ChFiDS_StripeMap*)nativeHandle)->Add(*((TopoDS_Vertex*)V->Handle), *((Handle_ChFiDS_Stripe*)F->Handle));
}

 Standard_Integer OCChFiDS_StripeMap::Extent()
{
  return ((ChFiDS_StripeMap*)nativeHandle)->Extent();
}

OCChFiDS_ListOfStripe^ OCChFiDS_StripeMap::FindFromKey(OCNaroWrappers::OCTopoDS_Vertex^ V)
{
  ChFiDS_ListOfStripe* tmp = new ChFiDS_ListOfStripe();
  *tmp = ((ChFiDS_StripeMap*)nativeHandle)->FindFromKey(*((TopoDS_Vertex*)V->Handle));
  return gcnew OCChFiDS_ListOfStripe(tmp);
}

OCChFiDS_ListOfStripe^ OCChFiDS_StripeMap::FindFromIndex(Standard_Integer I)
{
  ChFiDS_ListOfStripe* tmp = new ChFiDS_ListOfStripe();
  *tmp = ((ChFiDS_StripeMap*)nativeHandle)->FindFromIndex(I);
  return gcnew OCChFiDS_ListOfStripe(tmp);
}

OCTopoDS_Vertex^ OCChFiDS_StripeMap::FindKey(Standard_Integer I)
{
  TopoDS_Vertex* tmp = new TopoDS_Vertex();
  *tmp = ((ChFiDS_StripeMap*)nativeHandle)->FindKey(I);
  return gcnew OCTopoDS_Vertex(tmp);
}

 void OCChFiDS_StripeMap::Clear()
{
  ((ChFiDS_StripeMap*)nativeHandle)->Clear();
}

