

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main( )
{
	vector <int> myvc { 1,4,3,2,4,3,3};
	int consec = 2;
	int targetVal = 3;
	vector<int>::iterator it;
	
	it = search_n(myvc.begin(), myvc.end(), consec, targetVal);

	if (it != myvc.end()) {
        cout << targetVal << " is present consecutively " << consec << " times at index "
             << (it - myvc.begin()) << endl;
    } else {
        cout <<  targetVal  << " is not present consecutively" <<  consec << " times in "
             << "vector myvc";
    } 




	


	vector <int> myvc2 { 1,4,3,2,4,3,3};
	int consec2 = 2;
	int targetVal2 = 3;
	vector<int>::iterator it2;
	
	// correct message based on condition
	it = search_n(myvc2.begin(), myvc2.end(), consec2, targetVal2, [ ] ( int i, int j) { if( i > j ) { return true;} else { return false;}} );

	if (it != myvc2.end()) {
        cout << targetVal2 << " is present consecutively " << consec2 << " times at index "
             << (it - myvc2.begin()) << endl;
    } else {
        cout <<  targetVal2  << " is not present consecutively" <<  consec2 << " times in "
             << "vector myvc2" << endl;
    } 

	return 0;		
}


