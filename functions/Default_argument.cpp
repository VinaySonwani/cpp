
// Parameters are assigned from left to right so starting from the right we can issue the default values.


#include <iostream>
using namespace std;

// Right
void print(int a, int b = 2)
{
	cout << a << "\n" << b << "\n" << endl;
}

// Wrong
/*
void print(int d = 5, int e)
{
	cout << d << "\n" << e << "\n" << endl;
}
*/

/*
void print(int c)
{
	cout << c << "\n" << endl;
}
*/

int main()
{
	print(1);
	print(3,4);
	return 0;
}

