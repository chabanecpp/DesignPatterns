/*
- Problematic of the cost of creating an object
- Clone instead of create obj (if clone costs less then creation)
- 
*/

class ObjectToClone
{};

class Prototype
{
public:
   virtual Prototype& Clone() = 0;
};

class ConcreatePrototype1 : public Prototype
{
public:
   Prototype& Clone() override;
};

class ConcreatePrototype2 : public Prototype
{
public:
   Prototype& Clone() override;
};

class FactoryPrototype
{
public:
   static Prototype& MakePrototype(int choice);
private:
   static Prototype* s_prototypes[2];
};