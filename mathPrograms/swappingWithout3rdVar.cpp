
#include<iostream>
using namespace std;

int main()
{
	int a = 5, b =7;
	cout << " Before Swaaping: " << "a: " << a << "\t" << "b: " << b << endl;
	
	a = a + b;
	b = a - b;
	a = a - b;

	cout << "after swapping: " << "a: " << a << "\t" << "b: " << b << endl;	

	return 0;
}