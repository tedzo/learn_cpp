/*
 * template.cpp
 *
 * Just some boilerplate stuff to use for each file.
 */

#include <iostream>
#include <complex>
using namespace std;

struct sVector {
    int size;
    double *elem;
};

void vector_init(sVector & v, int s)
{
    v.elem = new double[s];
    v.size = s;
}

/* Fill values in a sVector.  Assume an already initialized vector is passed in */
void read_vector(sVector & v)
{
    cout << "Please give me " << v.size << " floating point numbers.\n";

    for (auto i=0; i!=v.size; ++i)
        cin >> v.elem[i];
}

/* Sum values in a sVector. */
double sum_vector(sVector & v)
{
    double sum = 0;
    for (auto i=0; i!=v.size; ++i)
        sum += v.elem[i];
    
    return sum;
}

void svector_access(sVector v, sVector & rv, sVector *pv)
{
    int i1 = v.size;    // Access to pass-by-value vector
    int i2 = rv.size;    // Access to pass-by-reference vector
    int i3 = pv->size;   // Access by pointer to vector
}

void handle_svector()
{
    int num_vals;

    cout << "How many elements in the sVector? ";
    cin >> num_vals;

    sVector v;
    vector_init(v, num_vals);
    read_vector(v);

    // double sum = read_and_sum(num_vals);
    cout << "The sum is: " << sum_vector(v) << "\n";
}

/* Use a class instead of a struct */

class cVector {
public:
    cVector(int s): elem{new double[s]}, sz{s} {}     // construct a cVector
    double& operator[](int i) { return elem[i]; }       // [] element access: subscripting
    int size() { return sz; } // Let's see how this name overloading works!
private:
    double* elem;
    int sz;
};

double cvector_read_and_sum(int s)
{
    cVector v(s);

    cout << "Please give me " << s << " floating point numbers.\n";
    for (auto i=0; i!=v.size(); ++i)
        cin >> v[i];

    double sum = 0;
    for (auto i=0; i!=v.size(); ++i)
        sum += v[i];
    
    return sum;
}

void handle_cvector()
{
    int num_vals;

    cout << "How many elements in the cVector? ";
    cin >> num_vals;

    auto sum = cvector_read_and_sum(num_vals);

    // double sum = read_and_sum(num_vals);
    cout << "The sum is: " << sum << "\n";
}

int main()
{
    handle_svector();
    handle_cvector();
}

// vim: set ai sw=4 et sm:
