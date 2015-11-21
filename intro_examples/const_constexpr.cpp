/*
 * const_constexpr.cpp
 *
 * Try out some uses of const and constexpr.
 * In particular, try out a constexpr function.
 */

#include <iostream>
#include <complex>
using namespace std;

double square(double x)
{
	return x * x;
}

constexpr double square_ce(double x)
{
	return x * x;
}

void print_square(double x)
{
	cout << "the square of " << x << " is " << square(x) << "\n";
}

int main()
{
	double d1 = 2.3;
	double d2 {2.3};


	cout << "Let's show some numbers.\n";

	complex<double> z1 = 1;		// Initialization with =
	cout << "z1 (= 1) = " << z1 << "\n";

	complex<double> z2 {d1,d2};	// List form of initialization.
	cout << "z2 ({d1,d2}) = " << z2 << "\n";

	complex<double> z3 = {1,2};	// = is optional with list form.
	cout << "z3 (= {1,2}) = " << z3 << "\n";

	constexpr double d3_ce {square_ce(3.25)};
	cout << "d3_ce ({square_ce(3.25)}) = " << d3_ce << "\n";

	// Can't do line below, since only constexpr functions may be used to initialize
	// constexpr variables.
	constexpr double d4_ce {square_ce(3.25)};
	cout << "d4_ce ({square_ce(3.25)}) = " << d4_ce << "\n";
}
