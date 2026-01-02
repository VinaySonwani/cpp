
#include <iostream>
using namespace std;


int main()
{
	int a, b;
	cout << "Please enter the values" << endl;
	cin >> a >> b;
	try
	{
		if(b == 0)
		{
			throw "Error !! 'b' must be greater than zero";
		}

		cout << (a / b) << endl;

	}catch (const char* msg) { cout << msg << "\n" << endl; }

	return 0;
}

