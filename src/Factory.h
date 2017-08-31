/*
               Simple Factory
- Cacher la fabrication des objets
- La factory offre une m�thode statique qui prend comme param�tre le type d'objet � cr�er et retourne l'objet cr�e
- La factory cache la fabrication
*/
enum class Type
{
	type1,
	type2,
};

__interface IProduct
{

};

class Product1 : public IProduct
{
public:
	Product1() {}
};

class Product2 : public IProduct
{
public:
	Product2() {}
};

class Factory
{
public:
	static IProduct* CreateProduct(const Type&);
private:
	Factory();
	Factory(const Factory&);
};