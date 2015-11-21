// vim: set ai sw=4 sm:

#include <iostream>
using namespace std;

double square(double x)
{
    return x * x;
}

void print_square(double x)
{
    cout << "the square of " << x << " is " << square(x) << "\n";
}

int main()
{
    auto x = -3.25;
    cout << "x is: " << x << "\n";
    cout << "+x is: " << +x << "\n";
}
