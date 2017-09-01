/*
               Abstract Factory
- Encapsule un ensemble de Factory
- Le client crée une instance de la fabrique abstraite, appelle la méthode de création de produits, sans se soucier de la factory qui va produire le produit
*/
class IProduit
{};

class produit1 : public IProduit
{};

class produit2 : public IProduit
{};

class BaseAbstractFactory
{
public:
   virtual IProduit* Create() = 0;
};

class ConcreateAbstractFactory1 : public BaseAbstractFactory
{
public:
   IProduit* Create() override;
};

class ConcreateAbstractFactory2 : public BaseAbstractFactory
{
public:
   IProduit* Create() override;
};

class FactoryMaker
{
public:
   static BaseAbstractFactory* GetFactory();
};