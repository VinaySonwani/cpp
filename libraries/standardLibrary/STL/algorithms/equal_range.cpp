

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main( )
{
	vector <int> myvc{ 1, 2, 2, 2, 2, 4, 5, 6, 7, 8};

	std::pair<std::vector<int>::iterator,
              std::vector<int>::iterator> ip;

	int targetVal = 2;

    	sort(myvc.begin(), myvc.end());

    	ip = std::equal_range(myvc.begin(), myvc.end( ), targetVal );

    	cout << "2 is present in the sorted vector from index "
         	<< (ip.first - myvc.begin()) << " till "<< (ip.second - myvc.begin()) << endl;


	
	// using a predicate
	vector<int> v = { 10, 10, 30, 30, 30, 100, 10,
                      300, 300, 70, 70, 80 };

    	std::pair<std::vector<int>::iterator,
              std::vector<int>::iterator> ip2;

    	sort(v.begin(), v.end(), greater<int>());

	ip2 = std::equal_range(v.begin(), v.begin() + 12, 10, [ ] (int i, int j) { return i >j; } );


    	cout << "10 is present in the sorted vector from index "
         	<< (ip2.first - v.begin()) << " till "
         	<< (ip2.second - v.begin()) << endl;



	// using lower_bound and upper_bound in one place
	vector<int> v3 = { 1, 2, 3, 4, 5, 5, 6, 7 };

  	std::pair<std::vector<int>::iterator,
              std::vector<int>::iterator> ip3;

    	ip3 = std::equal_range(v3.begin(), v3.end(), 5);

    	cout << "std::lower_bound should be equal to "
         	<< (ip3.first - v3.begin()) << " and std::upper_bound "
         	<< "should be equal to " << (ip3.second - v3.begin());

    	vector<int>::iterator i1, i2;

    	// Using std::lower_bound
   	 i1 = std::lower_bound(v3.begin(), v3.end(), 5);
    	cout << "\nstd::lower_bound is = " << (i1 - v3.begin()) << endl;

    	// Using std::upper_bound
    	i2 = std::upper_bound(v3.begin(), v3.end(), 5);
    	cout << "\nstd::upper_bound is = " << (i2 - v3.begin()) << endl;


	
	return 0;		
}





