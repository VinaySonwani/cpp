
#include <iostream>
#include <memory>
using namespace std;

class Rectangle {
    int length;
    int breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area() { return length * breadth; }
};

int main()
{
    	shared_ptr<Rectangle> P1(new Rectangle(10, 5));
    	cout << P1->area() << endl;
  
   	 weak_ptr<Rectangle> P2 (P1);
    	// cout << P2->area() << endl;		// E. It doesn't point to the underlying class-type. Don't know why.
  
    	cout << P1.use_count() << endl;		// Reference count is 1 bcoz of the above.
	cout << P2.use_count() << endl;	

    return 0;
}