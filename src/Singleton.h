class Singleton
{
public:
	static const Singleton& GetInstance();//pb of thread race when creating instance (not thread-safe)
private:
	static Singleton* instance;

//Put constructor, copy constructor and assignment operator into private
	Singleton();
	Singleton(const Singleton&);
	Singleton& operator=(const Singleton&);
};

class SingletonCpp11 //thread-safe
{
public:
	static const SingletonCpp11& GetInstance();//Cpp11 thread-safe when creating static instance
private:
	SingletonCpp11();
	SingletonCpp11(const SingletonCpp11&);
	SingletonCpp11& operator=(const SingletonCpp11&);
};