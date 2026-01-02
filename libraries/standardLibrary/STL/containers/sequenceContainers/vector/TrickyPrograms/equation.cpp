

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class EquationCalculator
{
	vector<int> xValues;
	unordered_map <int, int> myUMap;
		
public:
	EquationCalculator( int& p_range )
	{
		int k;
		for( int i = 0; i < p_range; i++)
		{
			cout << "Please input the x values: " << endl;
			cin >> k;
			xValues.push_back(k);
		}		
	}

	void calculate( )
	{
		int y, A=3, B=4, C=5;
		for( auto i: xValues )
		{
			y = A * (i*i)  + (B*i) + C;
			myUMap[ i ] = y;
			y = 0;
		}
	}

	void show( )
	{
		for( auto& j : myUMap )
		cout << "For the value of x : " << j.first << "the value of y is: " << j.second << endl; 
	}
};

int main()
{
	 int range;
	
	cout << "Please input the range: " << endl;
	cin >> range;

	EquationCalculator obj( range );
	
	obj.calculate( );

	obj.show( );

	return 0;
}