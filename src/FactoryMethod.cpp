#include "FactoryMethod.h"

void AbstractFactory::CreateAndManage()
{
   //Here factory strategy defined
   CreateProduct();
   ManageProduct();
}

void ConcreateFactory::CreateProduct()
{
   //Create product
}

void ConcreateFactory::ManageProduct()
{
   //do something on product created
}
