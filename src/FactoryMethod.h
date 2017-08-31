/*
                    Factory Method
- c'est une factory simple
Mais qui gère la façon de créer les objets et la gère l'objet après la création

==> Control Product (creation & management )
*/

class AbstractFactory //Abstract factory class to define creation and management of a Product
{
public:
   void CreateAndManage();//Define strategy here
protected:
   virtual void CreateProduct() = 0;
   virtual void ManageProduct() = 0;

   //AbstractFactory();
   //AbstractFactory(const AbstractFactory&);
};

class ConcreateFactory : public AbstractFactory
{
protected:
   void CreateProduct() override;
   void ManageProduct() override;
};