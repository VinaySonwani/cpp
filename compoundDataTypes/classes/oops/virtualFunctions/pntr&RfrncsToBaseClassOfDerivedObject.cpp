
#include <iostream>
using namespace std;

class Base
{
public:
	int display(int a )
	{
		cout << "Base" << endl;
		return a;
	}
};

class Derived : public Base
{
public:
	void display()
	{
		cout << "Derived" << endl;
	}
};


int main()
{
	Base *objb2( new Derived( ));			/* Setting Base Pointer to a Derived object. objb2 is a Pointer that could point to a Base type 
							    		   object. Derived object has the Base part and Derived part. objb2 is pointing to the Base part only. */	

	objb2->display(10);					/* so here, Compiler checks in the Base only for the matching method ( parameters only, no effect on return 										    	   type) as it can't access the Derived's members. if it finds, it resolves to it otherwise generates Compiler error. 
									   objb2 would call Base's dsply. */


	Derived objd;	
	Base &objb( objd );					/* Setting Base reference to a Derived object. objb is a reference that could refer to a Base type 
						    		    	   object. objd is a derived object so it has the Base part and Derived part. objb is referring to 
						                    	   the Base part only i.e. objb can access only Base's members. */

	objb.display(20);					// objb would call Base's dsply bcoz of the above reason.					

		


	// Doing the same using a Derived Pointer and reference and they call Derived method. However it's kind of obvious so need to do it.
	
	Derived *objd6( new Derived );	
	objd6->display();			


	Derived objd2;
	Derived &objd3( objd2 );
	objd3.display();			



	return 0;
}






