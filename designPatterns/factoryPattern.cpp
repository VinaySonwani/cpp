
#include <iostream>
using namespace std;

class Product { 
public: 
    virtual void use() = 0; 
}; 
 
class ConcreteProductA : public Product { 
public: 
    	void use() override 
    	{
		cout << "ConcreteProductA" << endl;
    	} 
}; 
 
class ConcreteProductB : public Product { 
public: 
    	void use() override 
    	{
		cout << "ConcreteProductB" << endl;
	} 
}; 
 
class Factory { 
public: 
    static enum ProductType { PRODUCT_A, PRODUCT_B }; 
 
    static Product* createProduct(ProductType type) { 
        switch (type) { 
            case PRODUCT_A: return new ConcreteProductA(); 
            case PRODUCT_B: return new ConcreteProductB(); 
            default: return nullptr; 
        } 
    } 
}; 


int main( )
{
	Product* obj = Factory::createProduct(Factory:: PRODUCT_B);
	obj -> use( );

	return 0;
}



