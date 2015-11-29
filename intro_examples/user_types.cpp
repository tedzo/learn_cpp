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

/* Fill values in a Vector.  Assume an already initialized vector is passed in */
void read_vector(Vector & v)
{
    cout << "Please give me " << v.size << " floating point numbers.\n";

    for (auto i=0; i!=v.size; ++i)
        cin >> v.elem[i];
}

/* Sum values in a Vector. */
double sum_vector(Vector & v)
{
    double sum = 0;
    for (auto i=0; i!=v.size; ++i)
        sum += v.elem[i];
    
    return sum;
}

int main()
{
    int num_vals;

    cout << "How many elements in the vector? ";
    cin >> num_vals;

    Vector v;
    vector_init(v, num_vals);
    read_vector(v);

    // double sum = read_and_sum(num_vals);
    cout << "The sum is: " << sum_vector(v) << "\n";
}

// vim: set ai sw=4 et sm:
