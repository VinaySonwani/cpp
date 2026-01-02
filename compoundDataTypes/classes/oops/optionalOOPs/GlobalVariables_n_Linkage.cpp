
#include <iostream>
using namespace std;
void dsply();

int g_a(1);

static int g_b(3);
extern int g_c(4);
extern int g_d(5);

int g_e(6);
const int g_f(7);

static int g_h(8);

extern int g_i;

static void prnt()
{
	cout << "fn internal linkage\n" << endl;
}

namespace Constants
{
	extern const double pi(3.14159);
    extern const double avogadro(6.0221413e23);
    extern const double my_gravity(9.2);
}

// int g_j(9);
static int g_j(9);
// const int g_k(10);
extern const int g_k(10);

// int g_l(11);
extern int g_l(11);

int main()
{
	int g_a(2);
	cout << g_a << "\n" << endl;
	cout << ::g_a << "\n" << endl;

	cout << g_b << "\n" << endl;
	cout << g_c << "\n" << endl;
	cout << g_d << "\n" << endl;

	cout << g_f << "\n" << endl;

	prnt();

	cout << g_j << "\n" << endl;

	dsply();
	return 0;
}

