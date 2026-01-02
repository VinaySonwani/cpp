

// using count 

				// convert for array

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

char max(string str)
{
	unordered_map<char, int> um;
	char res;
	int count = 0;

	for(auto i : str)
	{
		um[ i ] ++;
		
		if(count < um[i])
		{
			res = i;
			count = um[ i ] ;
		}
	}
	return res;
}


int main()
{
	string str = "AA1a2_ 2G2";

	cout << max(str) << endl;

	return 0;
}