
#include<iostream>
using namespace std;

int* gvar3;

int* memoryAllocator()
{
	int* var1 = new int(10);
	gvar3 = var1;
	return var1;
}

void accessingByDuration()
{
	int* var4 = gvar3;
	cout << *var4 << endl;
}

int* staticVars()
{
	int a = 20;
	return &a;
}

int main()
{
	int* var2 = memoryAllocator();
	cout << *var2 << endl;
	accessingByDuration();
	int* var5 = staticVars();
	cout << *var5 << endl;
	return 0;
}


/*

Block: Curly braces which are the boundaries for the statements.
Scope: Accessibility of variables.
Duration: Lifespan of variables.

Reference: https://www.learncpp.com/cpp-tutorial/scope-duration-and-linkage-summary/

*/




