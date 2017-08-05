#include "Singleton.h"

Singleton* Singleton::instance = nullptr;

const Singleton& Singleton::GetInstance()
{
	if (nullptr == instance)
		instance = new Singleton();
	return *instance;
}

Singleton::Singleton()
{}
//////////////////////////////////////////////////////////////////////
const SingletonCpp11& SingletonCpp11::GetInstance()
{
	static SingletonCpp11 instance;
	return instance;
}

SingletonCpp11::SingletonCpp11()
{}