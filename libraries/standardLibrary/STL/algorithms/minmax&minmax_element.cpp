

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main( )
{
	pair<int, int> mypr;
	mypr  = minmax(53, 25);
	cout << "min is: " << mypr.first << endl;
	cout << "max is: " << mypr.second << endl;

	mypr = minmax( { 1, 2, 2, 2, 2, 4, 5, 6, 7, 8} );
	cout << "min in range is: " << mypr.first << endl;
	cout << "max in range is: " << mypr.second << endl;




    	vector<int> vi = { 5, 3, 4, 4, 3, 5, 3 };
    	pair<vector<int>::iterator, vector<int>::iterator> mnmx;
   	mnmx = minmax_element(vi.begin(), vi.begin() + 4);
    	cout << "The minimum value position obtained is : ";
    	cout << mnmx.first - vi.begin() << endl;
    	cout << "The maximum value position obtained is : ";
    	cout << mnmx.second - vi.begin() << endl;
    	cout << endl;
    	mnmx = minmax_element(vi.begin(), vi.end());
   	cout << "The minimum value position obtained is : ";
    	cout << mnmx.first - vi.begin() << endl;
        
    	cout << "The maximum value position obtained is : ";
    	cout << mnmx.second - vi.begin()<< endl;
		
	return 0;		
}





