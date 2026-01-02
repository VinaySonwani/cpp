
#include <iostream>
using namespace std;

class Class
{
	int m_i, m_j;
public:

	Class(int a, int b)         
	{ 
		m_i = a;
		m_j = b;
	}

	Class(const Class &obj3)	/* Default Copy constructor provided implicitly by our class. Mind the "&". It is absolutely necessary in this case to 							            prevent infinite recursion. Const is also somewhat necessary to ensure that the value that needs to be copied is not 							    altered in any way. There is no need to define it explicitly unless you want to prevent Shallow Copying */ 
	{
		m_i = obj3.m_i;              // Copying obj1's member variable's value into obj2's member variable.
		m_j = obj3.m_j;
	}

	void disply()       
	{
		cout << m_i << "\t" << m_j <<  endl;
	}
};


int main()
{
	Class obj1(10, 20);
	obj1.disply();
	Class obj2 = obj1;	/* Initialising newly created object with the value of previously existing object so here the Constructor would not be called for obj2
					   instead the Copy Constructor would be called. */
	obj2.disply();
	return 0;
}

