
// Similar to Function Overloading, Classes support Method Overloading. Same rule apply.

#include<iostream>
using namespace std;

class Test
{

public:
	float add(float a,float b)
	{
		float c;
		c = (a+b);
		cout << c << "\n" << "float is called" << endl;
		return c;
	}

	double add(double a, double b)	// Same Method name as above but different parameter types. No effect on return type.
	{
		double c;
		c = (a+b);
		cout << c << "\n" << "double is called" << endl;
		return c;
	}

	/*int fn(int a, int b)
	{
		cout << "first" << endl;
		return 1;
	}

	float fn(int a, int b)            // Error: Method name is same but parameter types are also same as the above.
	{
		cout << "second" << endl;
		return 2;
	}*/


};


int main()
{
	Test obj;
	obj.add(2.5,2.5);

	//obj.fn(2, 5);
	return 0;
}

// Reference: https://www.learncpp.com/cpp-tutorial/member-functions/





