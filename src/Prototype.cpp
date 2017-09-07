#include "Prototype.h"

Prototype* FactoryPrototype::s_prototypes[] = {new ConcreatePrototype1, new ConcreatePrototype2};

Prototype& FactoryPrototype::MakePrototype(int choice)
{
   return s_prototypes[choice]->Clone();
}

Prototype& ConcreatePrototype1::Clone()
{
   return *(new ConcreatePrototype1());
}

Prototype& ConcreatePrototype2::Clone()
{
   return *(new ConcreatePrototype2());
}
