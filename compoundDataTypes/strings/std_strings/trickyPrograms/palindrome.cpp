

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str {"radar"};
	int len = str.size();
	int flag = 0;

	for(int i=0; i < (len/2); i++)
	{
		if(str[i] == str[len - (i +1)])
			continue;
		else
		{
			flag = 1;
			break;
		}
	}
	
	flag ? cout << "No" : cout << "Yes" << endl;
	return 0;
}


