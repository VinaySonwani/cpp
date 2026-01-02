





// Passing as References and Pointers: Parameters are reference or pointer.

/*

#include <iostream>
using namespace std;

void fn(int &c, int &d)
{
	c = 3;
	d = 4;
}

void fn2(int *e, int *f)
{
	*e = 9;
	*f = 11;
}

int main()
{
	int a = 1, b =2;
	fn(a, b);
	cout << (a + b) << endl;

	int g = 5, h = 7;
	fn2(&g, &h);
	cout << "g: " << g << "\t" << "h: " << h << endl;
	
	return 0;
}

*/

/*

Pass by value, variable, address.

Use pointer as formal parameter also when a structure variable, class object, array variable are passed as argument.

Write about parameter creation, copying of arguments in it, lifetime and destruction of these.

*/




