
#include <iostream>
using namespace std;


class Myclass			// class definition. Class name should be in camel case.
{
	private:			// Private access specifier. It's optional to write it.

		int a, b; 		// private member variables or field.
		// int z = 5;       // Called default member initializer and supported only by c++11.

	public:		// public access specifier

		int c, d;	// Public fields

		void display()		// Member function or Method. 		
		{
			b = 4;	/* through 'this' pointer, Compiler assigns values to correct object's member variable. 'this' is a Constant Pointer which 
					    points to the Object which has made the call and it is the implicit first argument to every Method. */
			d =5;
			cout << b << d << endl;
		}

		Myclass()		/*  Special Method, called as Default constructor. It's called whenever an object is created. Its job is to initialize
					     the Object ( by assigning explicitly provided values to m.v. or using garbage values in the absence of explicit values ) or perform 					     any set up task. It must be public. It takes no argument. It has no return type. It should not be const. Default Constructor is 						     provided implicitly by the Class when there are no other types of Constructors defined. If other types of Constructors are defined 					     and you need to make an object that takes no argument then it is must that you write a default Constructor explicitly otherwise 						     compilation error. */
		{
		}

		Myclass( int g)		/* Called as Parameterised constructor. It's used to initialize Class objects using values provided in the argument.
						    It exhibits the concept of Function Overloading. */
		{
			a = g;	
		}
			
		Myclass( int e, int f)		// Parameterised constructor that takes two arguments.
		{
			a = e;
			c = f;
			cout << a << c << endl;
		}

							// We can use Constructor body for any purpose we like but it's better to use it only for initialization of m.v. and use
							// any other function to print the m.v. etc.

		void print();	// Forward declaration of a Method. It'd be defined outside the class & works normally.

		~Myclass()	/* Special Method, called as Destructor. It's called whenever an Object goes out of scope ( in case of the automatic 						                            memory allocation, when the function ends where it was created ) or the object is deleted using the delete operator. 
					    It can't take parameters so there is only one Destructor per class. Has no return type. Destructor is provided implicitly 
					    by the class so there is no need to define it explicitly. We must define it explicitly when there are Pointer member 
					    variables and we need to delete the memory allocated to them. */
		{
		}	
					 

		// It's a standard practice to keep member variables as private and methods as public. 
		// Within the class, members can access members belonging to any Access Specifiers.
		// Outside the class, only public members can be accessed and that too with the help of the class object.
		// To access private members from outside the class, a public member function is used which in-tern access the Private members.		
};

void Myclass::print()
{
	cout << a << b << c << d << endl;	
} 


int main()
{
	// Declaration.
		// Using AMA for a Class Type 
			Myclass obj;					/* A variable of class-type is called an object. This will call the Default Constructor. C++ allocates memory for the 								   			   	           class, then calls class's default constructor to do the initialization. */

		// Using DMA for a Class Type 
			Myclass* obj3 = new Myclass;		/*  This calls the default constructor. 'new' operator allocates memory for the class, then calls class's default constructor to do the 										     initialization. */

	// Assignment
		// using an Object
			obj.c = 8; 						// Although the Default Constructor has initialized the Object but this is the way to do assignment.

		// using a pointer
			obj3->d = 7;					// Operator "->" is used in this case.

	// Initialization 
		// AMA + initialization
			Myclass obj4(78);				/* Using Direct Initialization here. Based on the arguments the Compiler checks if the Parameterised Constructor that 										    takes one argument exists and resolves to it. The Constructor initialises the m.vs. associated with the object. */
			Myclass obj2(2,3);				/* Based on the arguments the Compiler checks if the Parameterised Constructor that takes two argument exists 
					           		    		   and resolves to it. The Constructor initialises the m.vs. associated with the object.*/

		// DMA + initialization
			Myclass* obj6 = new Myclass(91);			// Initialization using constructor that takes one argument.
			Myclass* obj5 = new Myclass(92, 93); 		// Initialization using constructor that takes two arguments.

	// Access

	// improve with accessing public and private members. 
		// Using an object
			obj.display(); 					// accessing public method using dot operator.
			obj2.display();
			obj.c = 6; 						// accessing public member variable using dot operator.

		// Using a Pointer
			obj3->display(); 						// accessing public method. Access operator is "->" in this case.
			obj6->c = 7; 							// accessing public member variable with "->"

	// getting the size
		cout << sizeof ( obj3 ) << endl;			// mind the size.

	// Destruction
		delete obj3; 					// These were having DMA so need to call delete to free the memory. This calls the Destructor.
		delete obj5;
		delete obj6;					
		obj3 = NULL;
		obj4 = NULL;
		obj5 = NULL;

		// Destructor would be called three more times as obj, obj2 & obj4 were having AMA so they would be destroyed here.
}


/*

A class Type with Private or Protected members is a Non-Aggregate. Aggregate Initialization is not possible in this case by design. To initialize a Non-Aggregate Class type, Constructor is required.
	
Reference: 	https://www.learncpp.com/cpp-tutorial/introduction-to-constructors/
			https://www.learncpp.com/cpp-tutorial/destructors/
			https://www.learncpp.com/cpp-tutorial/the-hidden-this-pointer-and-member-function-chaining/
			https://www.learncpp.com/cpp-tutorial/order-of-construction-of-derived-classes/

Write about visual representation of memory allocation to a Class-type when it's done automatically and when done dynamically.

A Function operates on the data that is provided to it as the argument. A class holds the data in Member Variables and has Methods to operate over it so class combines the data and method in a unit called object.

The purpose of using Access Specifiers is to restrict the access to the data.

in Class, data is called member variables or properties or attributes or state and function is called member fn or method or behaviour.

how to access members of a class-
1. Methods of the same class: all, directly.
2. Friend Functions: all, but using a Class object.
3. From Functions: Public members only using a class object.
4. Methods of a different class: 
    4.1. Check if the class has derived it so it will access protected and public. 
    4.2. if it is a friend of the class then it can access all.
    4.3. If none of the above 2, then 3.

You can create the instance of a class anywhere, required is just include the header file where the class is defined.

How mf of one class is able to access last held value by the member variable of another class.

Functions and classes are two different approach of creating softwares. Choose whatever suits you. 

*/

/*

C++ has access levels to restrict direct access to the code. Classes have Private, Protected & Public Access specifiers or Access controls. Outside the class, whatever is there in the global scope, belongs to the "the public" access level. "the public" can access the class's public members. Class members are immune to the class access specifiers.  

*/



