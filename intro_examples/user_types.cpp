/*
 * template.cpp
 *
 * Just some boilerplate stuff to use for each file.
 */

#include <iostream>
#include <complex>
using namespace std;

struct Vector {
    int size;
    double *elem;
};

void vector_init(Vector & v, int s)
{
    v.elem = new double[s];
    v.size = s;
}

double read_and_sum(int s)
{
    Vector v;
    vector_init(v, s);
    for (auto i=0; i!=s; ++i)
        cin >> v.elem[i];

    double sum = 0;
    for (auto i=0; i!=s; ++i)
        sum += v.elem[i];
    
    return sum;
}

int main()
{
    const auto num_vals = 5;

    cout << "Please give me " << num_vals << " floating point numbers.\n";
    double sum = read_and_sum(num_vals);
    cout << "The sum is: " << sum << "\n";
}

// vim: set ai sw=4 et sm:
