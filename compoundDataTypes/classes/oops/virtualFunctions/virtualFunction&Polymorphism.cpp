{\rtf1\ansi\ansicpg1252\cocoartf2865
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;\f1\fnil\fcharset0 HelveticaNeue;}
{\colortbl;\red255\green255\blue255;\red34\green36\blue49;\red255\green255\blue255;}
{\*\expandedcolortbl;;\cssrgb\c17647\c19216\c25098;\cssrgb\c100000\c100000\c100000;}
\paperw11900\paperh16840\margl1440\margr1440\vieww26000\viewh13200\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs36 \cf0 \
#include <iostream>\
using namespace std;\
\
class Base\
\{\
public:\
	 virtual void print()		// Virtual fn\
	\{\
		cout << "Base class" << endl;\
	\}\
\};\
\
\
class Derived : public Base\
\{\
public:\
	virtual void print()	override		// here Virtual keyword is optional. Override is a keyword to mark the function as override to a virtual fn\
	\{\
		cout << "Derived Class"<< endl;\
	\}\
\};\
\
int main()\
\{	\
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0
\cf0 	Base *objb( new Derived( ));		/* objb is referring to the base part of the derived object objd i.e. objb can only access Base members but since \
							    		   the method is Virtual it would resolve to the most derived version. At run time the program checks if any override \
							    		   exists, if it finds one, it resolves to it otherwise Base\'92s version is used. Apart from the Virtual Function, Base is still\
							    		   not able to access anything from the Derived. */ \
\
	objb->print();			// Will call Derived's print. Even if it\'92s private in derived. need to know how.\
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0
\cf0 			\
	\
	Derived objd2;\
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0
\cf0 	Base &objb2 = objd2;\
	objb2.print();\
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0
\cf0 	\
	return 0;\
\}\
\
\
\
\
/*\
\
Virtual fn only works when P&RttBCoDO are used. This works because the compiler can differentiate the type of the pointer or reference from the type of the object being pointed to or referenced. Calling a virtual Method directly on an object (not through a pointer or reference) will always invoke the Method belonging to the same type of that object.\
\
Overrides must have the same signature otherwise it becomes the case of P&RttBCoDO and requires that the method must be called with arguments matching base method.\
\
If the signature is same then it also requires that the return type should match otherwise error.\
\
If above three are satisfied then, virtual fn works as expected. \
\
What\'92s the need of virtual function when we can call the method using derived object: \
\pard\pardeftab720\sa280\partightenfactor0

\f1 \cf2 \cb3 \expnd0\expndtw0\kerning0
It provides the ability to structure your code in such a way that newly derived classes will automatically work with the old code without modification and support run time polymorphism.\
\pard\pardeftab720\sa180\partightenfactor0
\cf2 The downside of virtual functions:\
Since most of the time you\'92ll want your functions to be virtual, why not just make all functions virtual? The answer is because it\'92s inefficient -- resolving a virtual function call takes longer than resolving a regular one. Furthermore, the compiler also has to allocate an extra pointer for each class object that has one or more virtual functions.
\f0 \cf0 \cb1 \kerning1\expnd0\expndtw0 \
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0
\cf0 \
*/\
\
\
\
\
\
}