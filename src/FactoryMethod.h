/*
                    Factory Method
- c'est une factory simple
Mais qui g�re la fa�on de cr�er les objets et la g�re l'objet apr�s la cr�ation

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