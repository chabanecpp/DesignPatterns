#include "Builder.h"

void Server::BuildProduct()
{
   m_Builder->CreateProduct();

   m_Builder->BuildProperty1();
   m_Builder->BuildPropertyn();
}

void BuilderSpecialisation1::BuildProperty1()
{
   m_product->SetProperty1("BuilderSpecialisation1 : prop 1");
}

void BuilderSpecialisation1::BuildPropertyn()
{
   m_product->SetPropertyn("BuilderSpecialisation1 : prop n");
}

void BuilderSpecialisation2::BuildProperty1()
{
   m_product->SetProperty1("BuilderSpecialisation2 : prop 1");
}

void BuilderSpecialisation2::BuildPropertyn()
{
   m_product->SetPropertyn("BuilderSpecialisation2 : prop n");
}
