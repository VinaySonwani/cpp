{\rtf1\ansi\ansicpg1252\cocoartf2761
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;\f1\fnil\fcharset0 HelveticaNeue-Bold;\f2\fswiss\fcharset0 Helvetica-Bold;
\f3\fnil\fcharset0 HelveticaNeue;}
{\colortbl;\red255\green255\blue255;\red34\green36\blue49;\red255\green255\blue255;\red241\green241\blue241;
\red224\green224\blue224;\red42\green72\blue142;}
{\*\expandedcolortbl;;\cssrgb\c17647\c19216\c25098;\cssrgb\c100000\c100000\c100000;\cssrgb\c95686\c95686\c95686;
\cssrgb\c90196\c90196\c90196;\cssrgb\c21176\c36471\c62745;}
{\*\listtable{\list\listtemplateid1\listhybrid{\listlevel\levelnfc23\levelnfcn23\leveljc0\leveljcn0\levelfollow0\levelstartat1\levelspace360\levelindent0{\*\levelmarker \{disc\}}{\leveltext\leveltemplateid1\'01\uc0\u8226 ;}{\levelnumbers;}\fi-360\li720\lin720 }{\listname ;}\listid1}
{\list\listtemplateid2\listhybrid{\listlevel\levelnfc23\levelnfcn23\leveljc0\leveljcn0\levelfollow0\levelstartat1\levelspace360\levelindent0{\*\levelmarker \{disc\}}{\leveltext\leveltemplateid101\'01\uc0\u8226 ;}{\levelnumbers;}\fi-360\li720\lin720 }{\listname ;}\listid2}
{\list\listtemplateid3\listhybrid{\listlevel\levelnfc0\levelnfcn0\leveljc0\leveljcn0\levelfollow0\levelstartat1\levelspace360\levelindent0{\*\levelmarker \{decimal\}}{\leveltext\leveltemplateid201\'01\'00;}{\levelnumbers\'01;}\fi-360\li720\lin720 }{\listname ;}\listid3}}
{\*\listoverridetable{\listoverride\listid1\listoverridecount0\ls1}{\listoverride\listid2\listoverridecount0\ls2}{\listoverride\listid3\listoverridecount0\ls3}}
\paperw11900\paperh16840\margl1440\margr1440\vieww23120\viewh13040\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs36 \cf0 \
/*\
\
In C, you can\'92t have two functions with the same name even if they have different number or type of Parameters.\
\
In C++, you can have multiple functions with the same name but having different number or type of Parameters. This is called Function Overloading. Each Function sharing the name is called an Overloaded Function or Overload in short.\
\
\pard\pardeftab720\sa180\partightenfactor0

\f1\b \cf2 \cb3 \expnd0\expndtw0\kerning0
Overload Resolution:\
\pard\pardeftab720\sa280\partightenfactor0

\f0\b0 \cf2 when a function call is made to a function that has been overloaded, the compiler will try to match the function call to the appropriate overload 
\f2\b based on the arguments used in the function call
\f0\b0 . This is called overload resolution.\
Reference: {\field{\*\fldinst{HYPERLINK "https://www.learncpp.com/cpp-tutorial/introduction-to-function-overloading/"}}{\fldrslt https://www.learncpp.com/cpp-tutorial/introduction-to-function-overloading/}}\
\
Function Overloading checks for the number or type of the Parameters. Return Type is not considered.\
\pard\pardeftab720\sa180\partightenfactor0

\f1\b \cf2 Type signature:
\f3\b0 \cf2 \cb1 \
\pard\pardeftab720\sa280\partightenfactor0
\cf2 \cb3 A function\'92s type signature (generally called a signature) is defined as the parts of the function header that are used for differentiation of the function. In C++, this includes the function name, number of parameters, parameter type, and function-level qualifiers. It notably does not include the return type.
\f0 \
\pard\pardeftab720\sa180\partightenfactor0

\f1\b \cf2 Name Mangling:\
\pard\pardeftab720\sa280\partightenfactor0

\f3\b0 \cf2 \cb4 When the compiler compiles a function, it performs name mangling, which means the compiled name of the function is altered (\'93mangled\'94) based on various criteria, such as the number and type of parameters, so that the linker has unique names to work with.\cb1 \
\cb4 For example, some function with prototype \cb5 int fcn()\cb4  might compile to name \cb5 __fcn_v\cb4 , whereas \cb5 int fcn(int)\cb4  might compile to name \cb5 __fcn_i\cb4 . So while in the source code, two overloaded functions share a name, in compiled code, the names are actually unique.\cb1 \
\cb4 There is no standardization on how names should be mangled, so different compilers will produce different mangled names.\
Reference:  {\field{\*\fldinst{HYPERLINK "https://www.learncpp.com/cpp-tutorial/function-overload-differentiation/"}}{\fldrslt https://www.learncpp.com/cpp-tutorial/function-overload-differentiation/}}\
\

\f1\b How matching happens in Overload Resolution:\

\f3\b0 In case of normal functions, Arguments are matched with Parameters, if match is found then it\'92s resolved otherwise the Compiler error is generated.\
In case of Overloaded Functions, \cf2 \cb3 the compiler steps through a sequence of rules to determine which (if any) of the overloaded functions is the best match. At each step, the compiler applies a bunch of different type conversions to the argument(s) in the function call. For each conversion applied, the compiler checks if any of the overloaded functions are now a match. After all the different type conversions have been applied and checked for matches, the step is done. The result will be one of three possible outcomes:\cf2 \cb1 \
\pard\tx220\tx720\pardeftab720\li720\fi-720\partightenfactor0
\ls1\ilvl0\cf2 \cb3 \kerning1\expnd0\expndtw0 {\listtext	\uc0\u8226 	}\expnd0\expndtw0\kerning0
No matching functions were found. The compiler moves to the next step in the sequence.\cb1 \
\ls1\ilvl0\cb3 \kerning1\expnd0\expndtw0 {\listtext	\uc0\u8226 	}\expnd0\expndtw0\kerning0
A single matching function was found. This function is considered to be the best match. The matching process is now complete, and subsequent steps are not executed.\cb1 \
\ls1\ilvl0\cb3 \kerning1\expnd0\expndtw0 {\listtext	\uc0\u8226 	}\expnd0\expndtw0\kerning0
More than one matching function was found. The compiler will issue an ambiguous match compile error. We\'92ll discuss this case further in a bit.\
\pard\pardeftab720\sa280\partightenfactor0
\cf2 If the compiler reaches the end of the entire sequence without finding a match, it will generate a compile error that no matching overloaded function could be found for the function call.\
\pard\pardeftab720\sa180\partightenfactor0

\f1\b \cf2 The argument matching sequence:
\f3\b0 \cf2 \cb1 \
\pard\pardeftab720\sa280\partightenfactor0

\f1\b \cf2 \cb3 Step 1:
\f3\b0  The compiler tries to find an exact match. This happens in two phases. First, the compiler will see if there is an overloaded function where the type of the arguments in the function call exactly matches the type of the parameters in the overloaded functions. Second, the compiler will apply a number of trivial conversions to the arguments in the function call. The trivial conversions are a set of specific conversion rules that will modify types (without modifying the value) for purposes of finding a match. These include:\cf2 \cb1 \
\pard\tx220\tx720\pardeftab720\li720\fi-720\partightenfactor0
\ls2\ilvl0\cf2 \cb3 \kerning1\expnd0\expndtw0 {\listtext	\uc0\u8226 	}\expnd0\expndtw0\kerning0
lvalue to rvalue conversions\cb1 \
\ls2\ilvl0\cb3 \kerning1\expnd0\expndtw0 {\listtext	\uc0\u8226 	}\expnd0\expndtw0\kerning0
qualification conversions (e.g. non-const to const)\cb1 \
\ls2\ilvl0\cb3 \kerning1\expnd0\expndtw0 {\listtext	\uc0\u8226 	}\expnd0\expndtw0\kerning0
non-reference to reference conversions\
\pard\tx720\pardeftab720\partightenfactor0
\cf2 \cb4 \
\pard\pardeftab720\sa280\partightenfactor0

\f1\b \cf2 \cb3 Step 2:
\f3\b0  If no exact match is found, the compiler tries to find a match by applying numeric promotion to the argument(s). In lesson ({\field{\*\fldinst{HYPERLINK "https://www.learncpp.com/cpp-tutorial/implicit-type-conversion/"}}{\fldrslt \cf6 10.1 -- Implicit type conversion}}), we covered how certain narrow integral and floating point types can be automatically promoted to wider types, such as \cf2 \cb5 int\cf2 \cb3  or \cf2 \cb5 double\cf2 \cb3 . If, after numeric promotion, a match is found, the function call is resolved.\

\f1\b Step 3:
\f3\b0  If no match is found via numeric promotion, the compiler tries to find a match by applying numeric conversions ({\field{\*\fldinst{HYPERLINK "https://www.learncpp.com/cpp-tutorial/numeric-conversions/"}}{\fldrslt \cf6 10.3 -- Numeric conversions}}) to the arguments.\

\f1\b Step 4:
\f3\b0  If no match is found via numeric conversion, the compiler tries to find a match through any user-defined conversions. Although we haven\'92t covered user-defined conversions yet, certain types (e.g. classes) can define conversions to other types that can be implicitly invoked.\

\f1\b Step 5:
\f3\b0  If no match is found via user-defined conversion, the compiler will look for a matching function that uses ellipsis.\

\f1\b Step 6:
\f3\b0  If no matches have been found by this point, the compiler gives up and will issue a compile error about not being able to find a matching function.
\fs28 \
\pard\pardeftab720\sa180\partightenfactor0

\f1\b\fs36 \cf2 Ambiguous matches:
\f3\b0 \cf2 \cb1 \
\pard\pardeftab720\sa280\partightenfactor0
\cf2 \cb3 With non-overloaded functions, each function call will either resolve to a function, or no match will be found and the compiler will issue a compile error. With overloaded functions, there is a third possible outcome: an \cf2 \cb5 ambiguous match\cf2 \cb3  may be found. An ambiguous match occurs when the compiler finds two or more functions that can be made to match in the same step. When this occurs, the compiler will stop matching and issue a compile error stating that it has found an ambiguous function call.\
\pard\pardeftab720\sa180\partightenfactor0

\f1\b \cf2 Resolving ambiguous matches:
\f3\b0 \cf2 \cb1 \
\pard\pardeftab720\sa280\partightenfactor0
\cf2 \cb3 Because ambiguous matches are a compile-time error, an ambiguous match needs to be disambiguated before your program will compile. There are a few ways to resolve ambiguous matches:\cf2 \cb1 \
\pard\tx220\tx720\pardeftab720\li720\fi-720\partightenfactor0
\ls3\ilvl0\cf2 \cb3 \kerning1\expnd0\expndtw0 {\listtext	1	}\expnd0\expndtw0\kerning0
Often, the best way is simply to define a new overloaded function that takes parameters of exactly the type you are trying to call the function with. Then C++ will be able to find an exact match for the function call.\cb1 \
\ls3\ilvl0\cb3 \kerning1\expnd0\expndtw0 {\listtext	2	}\expnd0\expndtw0\kerning0
Alternatively, explicitly cast the ambiguous argument(s) to match the type of the function you want to call.\
\ls3\ilvl0\kerning1\expnd0\expndtw0 {\listtext	3	}\expnd0\expndtw0\kerning0
If your argument is a literal, you can use the literal suffix to ensure your literal is interpreted as the correct type.\
\pard\tx720\pardeftab720\partightenfactor0
\cf2 \cb4 \
\pard\pardeftab720\sa180\partightenfactor0

\f1\b \cf2 \cb3 Matching for functions with multiple arguments:
\f3\b0 \cf2 \cb1 \
\pard\pardeftab720\sa280\partightenfactor0
\cf2 \cb3 If there are multiple arguments, the compiler applies the matching rules to each argument in turn. The function chosen is the one for which each argument matches at least as well as all the other functions, with at least one argument matching better than all the other functions. In other words, the function chosen must provide a better match than all the other candidate functions for at least one parameter, and no worse for all of the other parameters.\cf2 \cb1 \
\cf2 \cb3 In the case that such a function is found, it is clearly and unambiguously the best choice. If no such function can be found, the call will be considered ambiguous (or a non-match).\
Reference: {\field{\*\fldinst{HYPERLINK "https://www.learncpp.com/cpp-tutorial/function-overload-resolution-and-ambiguous-matches/"}}{\fldrslt https://www.learncpp.com/cpp-tutorial/function-overload-resolution-and-ambiguous-matches/}}\cf2 \cb4 \
\
\pard\pardeftab720\sa280\partightenfactor0

\f0 \cf2 \cb3 \
\pard\pardeftab720\sa280\partightenfactor0
\cf2 \
}