
#include <iostream>
#include <exception>	// for std::exception
#include <string>
#include <stdexcept>	// for std::runtime_error
using namespace std;


int main()
{
    char a;

    cout << "Input a character" << endl;
    cin >> a;
    
    try
    {
        if (a != 'y')
        {
            throw std::runtime_error("Exception ! Error");
        }
    }

    catch(const std::exception& e)
    {
        std::cout << "Caught exception: " << e.what() << endl;
    }

	return 0;
}

