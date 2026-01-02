
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
    unique_ptr<Rectangle> P1(new Rectangle(10, 5));
    cout << P1->area() << endl; 

    // unique_ptr<Rectangle> P2(P1);	// E. Copy constructor is implicitly deleted as it has a user-declared move constructor
    unique_ptr<Rectangle> P2;
    P2 = move(P1);

    cout << P2->area() << endl;

    //cout<<P1->area()<<endl;			// E. At one time only one smart pointer can point to the underlying class-type.

    return 0;
}


