/*
               Simple Factory
- Cacher la fabrication des objets
- La factory offre une méthode statique qui prend comme paramètre le type d'objet à créer et retourne l'objet crée
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