
#include <iostream>
using namespace std;

int add(const int a, int b)
{
	return(a + b);
}

int main()
{
	// const int i;                // ERROR.
	const int j = 1;
	cout << j << "\n" << endl;
	// j = 2;                      // ERROR.

	int k = 3;
	const int l = k;
	cout << l << "\n" << endl;

	int m = add(4,j);
	cout << m << "\n" << endl;

	// constexpr int n = 9.8;
	int p;
	cout << "Enter value of p = ";
	cin >> p;
	// constexpr int q = p;         // ERROR.
	return 0;
}

