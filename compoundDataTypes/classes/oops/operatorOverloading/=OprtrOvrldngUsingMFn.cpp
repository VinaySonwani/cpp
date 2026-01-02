
#include <iostream>
using namespace std;

class Cls
{
	int i;
public:
	Cls(int a)  
	{
		i = a;
	}

	void dsply() 
	{
		cout << "Value is = " << i << "\n" << endl;
	}

	void operator=(const Cls &obj3)		/* Default Assignment Operator provided by the class. "&" is not necessary here but it's a good 
									    practice to keep it. Const can be used to ensure that the copying value is not altered in any 
									    way. There is no need to define it explicitly. */
	{
		i = obj3.i;
	}
};


int main()
{
	Cls obj1(10);    
	Cls obj2(20);
	obj1.dsply();
	obj2.dsply();
	
	// copying values of one previously existing object into another previously existing object.
	obj1 = obj2;  		// this calls the Default Assignment Operator.
	obj1.dsply();
	return 0;
}

