
/*
Logic is to compare start character with end character till the half length.
*/


#include <iostream>
using namespace std;


int main()
{
	int i, len, flag = 0;
	char ptr[20];
	cout << "enter string = ";
	cin >> ptr;
	len = strlen(ptr);
	for (i=0; i<len/2; i++)
	{
		if(ptr[i] == ptr[len-(i+1)])
			continue;
		else
		{
			flag = 1;
			break;
		}
	}
	if(flag == 0)
		cout << "Palindrome";
	else
		cout << "Not";
	return 0;
}

