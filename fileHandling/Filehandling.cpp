
#include<iostream>
#include<fstream> 			// header file for file handling.
using namespace std;


int main()
{
	char fyl[100]; // this variable holds the data entered then that data is written into file.

	// opening a file in write mode.
	ofstream wrtfl;
	wrtfl.open("file.txt");

	cout << "Enter data to be written into file : \n" << endl;
	cin.getline(fyl,100); // getline fn holds the entered string.

	// Now writing string hold by fyl into the file named "file"
	wrtfl << fyl << endl;
	cout << "\n" ;

	cout << "Enter some more data : \n" << endl;
	cin.getline(fyl,100);
	// cin.ignore(); // it ignores the data written after previous statement.

	// again writing into the file.
	wrtfl << fyl << endl;
	cout << "\n";

	// now closing the file.
	wrtfl.close();

	//Opening the file to read from it.
	ifstream rdfl;
	rdfl.open("file.txt");

	// now reading from file.
	//rdfl >> fyl; // this only prints first word in the string up to first whitespace.
	rdfl.getline(fyl,100);

	// Printing read data from file onto the screen.
	cout << fyl << "\n" << endl;

	// again reading from file.
	rdfl.getline(fyl,100);

	// again printing the data.
	cout << fyl << "\n" << endl;

	// closing the file.
	rdfl.close();

	return 0;
}

 