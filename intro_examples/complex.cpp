/*
 * complex.cpp
 *
 * Show creation of a complex type with double precision scalers.
 * Show both = and list forms of variable initialization.
 */

#include <iostream>
#include <complex>
// using namespace std;

double square(double x)
{
	return x * x;
}

void print_square(double x)
{
	std::cout << "the square of " << x << " is " << square(x) << "\n";
}

int main()
{
	double d1 = 2.3;
	double d2 {2.3};

	std::complex<double> z1 = 1;		// Initialization with =
	std::complex<double> z2 {d1,d2};	// List form of initialization.
	std::complex<double> z3 = {1,2};	// = is optional with list form.

	std::cout << "Let's show some complex numbers.\n";
	std::cout << "z1 (= 1) = " << z1 << "\n";
	std::cout << "z2 ({d1,d2}) = " << z2 << "\n";
	std::cout << "z3 (= {1,2}) = " << z3 << "\n";
}
