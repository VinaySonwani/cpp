
#include <iostream>
#include <sstream>			// header for stringstream
#include <string>
using namespace std;

int main() 
{
	string str = "AAPL BUY 100 500";

	// Create a stringstream object to str
    	stringstream ss(str);
	
  	// Temporary object to store the splitted string
    	string t;
  
  	// Delimiter
    	char del = ' ';

   	// Splitting the str string by delimiter
	while (getline(ss, t, del))
	{
        	cout << t << endl;
	}
    	
	return 0;
}