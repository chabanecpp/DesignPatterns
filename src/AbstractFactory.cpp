#include "AbstractFactory.h"

IProduit* ConcreateAbstractFactory1::Create()
{
   return new produit1();
}

IProduit* ConcreateAbstractFactory2::Create()
{
   return new produit2();
}

BaseAbstractFactory* FactoryMaker::GetFactory()
{
   BaseAbstractFactory* factory = nullptr;
   bool bfactory(true);//enable to choose which factory to use
   if (bfactory)
      factory = new ConcreateAbstractFactory1();
   else
      factory = new ConcreateAbstractFactory2();
   return factory;
}
