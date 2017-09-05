/*
                                       Builder
- Separate la construction of complex object from its representation ==> Same construction process can create different representations 
dissocier la construction d�un objet de sa repr�sentation, afin que le m�me processus de construction a la possibilit� de cr�er des repr�sentations diff�rentes

Pourquoi utiliser le builder?
 - Cr�ation objet complexe
 - Plusieurs arguments doivent �tre pass�s � la construction ; plus de lisibilit�
 - quand qq des 
*/
#include <string>

class ProductToBuild
{
public:
   void SetProperty1(std::string prop) { m_property1 = prop; };
   void SetPropertyn(std::string prop) { m_propertyn = prop; };
private:
   std::string m_property1;
   std::string m_propertyn;
};

class Builder
{
public:
   ProductToBuild& GetProduct() const { return *m_product; }
   void CreateProduct() { m_product = new ProductToBuild(); }

   virtual void BuildProperty1() = 0;
   virtual void BuildPropertyn() = 0;
protected:
   ProductToBuild* m_product;
};

class BuilderSpecialisation1 : public Builder
{
public:
   void BuildProperty1() override;
   void BuildPropertyn() override;
};

class BuilderSpecialisation2 : public Builder
{
public:
   void BuildProperty1() override;
   void BuildPropertyn() override;
};

class Server
{
public:
   void SetBuilder(Builder* b) { m_Builder = b; }
   ProductToBuild& GetProduct() const { return m_Builder->GetProduct(); }
   void BuildProduct();
private:
   Builder* m_Builder;
};