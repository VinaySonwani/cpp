
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
	string str = "cbcba";
	unordered_set<char> ust;

	int size = str.size();
	for(int i = (size-1); i >=0; i--)
		ust.insert(str[i]);

	for( auto i : ust )
		cout << i << "\t" ;
	cout << endl;

	return 0;
}

