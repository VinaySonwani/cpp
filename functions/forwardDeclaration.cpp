{\rtf1\ansi\ansicpg1252\cocoartf2761
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;\f1\fswiss\fcharset0 Helvetica-Bold;\f2\fnil\fcharset0 HelveticaNeue-Bold;
\f3\fnil\fcharset0 HelveticaNeue;}
{\colortbl;\red255\green255\blue255;\red34\green36\blue49;\red255\green255\blue255;\red224\green224\blue224;
}
{\*\expandedcolortbl;;\cssrgb\c17647\c19216\c25098;\cssrgb\c100000\c100000\c100000;\cssrgb\c90196\c90196\c90196;
}
\paperw11900\paperh16840\margl1440\margr1440\vieww25040\viewh13200\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs36 \cf0 \
/*\

\f1\b Forward Declaration:
\f0\b0 \
\
A forward declaration allows us to tell the compiler about the existence of an identifier before actually defining the identifier.\
\
To use a Function first and later define, we need to do the forward declaration of the function by using the Function Prototype.\
\
Function prototypes include the function Parameters, the name of the function, return type and access specifier. \
\
When a Function Forward Declaration is done then with the help of Function Prototype, Compiler knows that a Function with the given name, Parameters, Return Type & access specifier exists even though the Function has not been defined yet. This way when the Compiler encounters the function call it knows that we are making a function call and it can check to ensure that we are calling the function correctly.\
\

\f1\b What happens when you forget to define the function:
\f0\b0 \
\
Program compiles fine but Linker generates the linking error saying it could find the function definition. \
\
\pard\pardeftab720\partightenfactor0

\f2\b \cf2 \cb3 \expnd0\expndtw0\kerning0
Other types of forward declarations:\
\

\f3\b0 Forward Declarations are used frequently with Functions. These are also used with identifiers like Variables and Types.\
\

\f2\b Declarations vs. definitions:\
\

\f3\b0 A declaration tells the compiler about the existence of an identifier and its associated type information.\
A definition is a declaration that actually implements (for functions and types) or instantiates (for variables) the identifier.\
In C++, all definitions are declarations. Therefore \cb4 int x;\cb3  is both a definition and a declaration.\cb1  \cb3 Conversely, not all declarations are definitions. Declarations that aren\'92t definitions are called pure declarations. Types of pure declarations include forward declarations for function, variables, and types.\
\
\pard\pardeftab720\sa180\partightenfactor0

\f2\b \cf2 The one definition rule (ODR) :\

\f3\b0 Reference: {\field{\*\fldinst{HYPERLINK "https://www.learncpp.com/cpp-tutorial/forward-declarations/"}}{\fldrslt https://www.learncpp.com/cpp-tutorial/forward-declarations/}}\
\
\pard\pardeftab720\partightenfactor0

\f0 \cf0 \cb1 \kerning1\expnd0\expndtw0 \
how to access variable defined in a function into some other function.\
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0
\cf0 \
Always try to write 'generic' application. Use config files, variables etc.\
\
don't use so many fn. calls for smaller fns. as fn. calls take longer time instead u can use inline fn. or macros for them. ( difference b/w inline fn. and macros ).\
*/\
\
\
\
\
}