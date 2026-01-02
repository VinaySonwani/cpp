
#include <iostream>
using namespace std;

// enumration declaration
enum day{sunday, monday, tuesday};


int main()
{
	enum day var;
		// OR
	day var2;

	var = monday;
	cout << var << endl;
	cout << sunday << endl;

    return 0;
}

