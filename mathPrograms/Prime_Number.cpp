
/* 
A whole number greater than 1 that cannot be exactly divided by any whole number other than itself and 1 (e.g. 2, 3, 5, 7, 11).

Logic is to take mod of the number starting with 2 till the size of half of it and check if we always get a remainder, if not then it's not the prime.
*/

#include <iostream>
using namespace std;


int main()
{
	int n;
	cout << "Enter a num:" << endl;
	cin >>  n;
	bool flag = 0;

	for(int i = 2; i <=n/2; i++)			// Mind the <=. It's for number 4
	{
		if(n%i == 0)
		{
			flag =1;
			break;
		}
	}

	flag ? cout << "not" : cout << "prime";

	return 0;
}

