#include "Singleton.h"
#include "Factory.h"
#include "FactoryMethod.h"
#include "AbstractFactory.h"
#include "Builder.h"

#include <iostream>
#include <thread>

void func1()
{
	const Singleton& instance1 = Singleton::GetInstance();
}

void func2()
{
	const Singleton& instance2 = Singleton::GetInstance();
}

int main()
{
	{
		std::thread thread1(func1);
		std::thread thread2(func2);

		thread1.join();
		thread2.join();
	}
	
   //Factory
	{
		IProduct* p1 = Factory::CreateProduct(Type::type1);
		IProduct* p2 = Factory::CreateProduct(Type::type2);
	}

   //Factory Method
   {
      AbstractFactory* factory = new ConcreateFactory();
      factory->CreateAndManage();

      delete factory;
      factory = nullptr;
   }

   //Abstract Factory
   {
      IProduit* p = FactoryMaker::GetFactory()->Create();
   }

   //Builder Factory
   {
      Server* s = new Server();
      BuilderSpecialisation1* builder1 = new BuilderSpecialisation1();
      BuilderSpecialisation2* builder2 = new BuilderSpecialisation2();

      s->SetBuilder(builder1);
      s->BuildProduct();
      ProductToBuild& p1 = s->GetProduct();

      s->SetBuilder(builder2);
      s->BuildProduct();
      ProductToBuild& p2 = s->GetProduct();
   }
	return 0;
}