#include "Factory.h"

IProduct* Factory::CreateProduct(const Type& type)
{
	switch (type)
	{
	case Type::type1:
		return new Product1();
		break;
	case Type::type2:
		return new Product2();
		break;
	default:
		return nullptr;
		break;
	}
}