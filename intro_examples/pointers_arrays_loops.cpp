/*
 * pointers_arrays_loops.cpp
 *
 * Just some boilerplate stuff to use for each file.
 */

#include <iostream>
#include <complex>
using namespace std;

#define ASIZE(array) ( sizeof(array) / sizeof(array[0]) )

void show_int_array_size()
{
    int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << "Sizeof(int): " << sizeof(int) << "\n";
    cout << "Sizeof(v[0]): " << sizeof(v[0]) << "\n";
    cout << "Sizeof(v): " << sizeof(v) << "\n";
    cout << "ASIZE(v): " << ASIZE(v) << "\n";
}

void show_copy_with_for()
{
    int v1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int v2[10]; // To be a copy of v1

    for (auto i=0; i!=10; ++i)  // copy elements
        v2[i] = v1[i];

    cout << "Let's show v1.\n";
    cout << "  " << &v1 << "\n";
    cout << "  " << v1 << "\n";
    cout << "  ";
    for (auto i=0; i<10; ++i)
        cout << v1[i] << ", ";
    cout << "\n";

    cout << "Let's show v2.\n";
    cout << "  " << &v2 << "\n";
    cout << "  " << v2 << "\n";
    cout << "  ";
    for (auto i=0; i<10; ++i)
        cout << v2[i] << ", ";
    cout << "\n";
}

void show_with_range_for()
{
    int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto x : v)    // for each x in v
        cout << " " << x;
    cout << "\n";

    for (auto x : {10, 21, 32, 43, 54, 65})
        cout << " " << x;
    cout << "\n";

}

void show_reference_range_for()
{
    int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto& x : v)
        ++x;

    for (auto x : v)
        cout << " " << x;
    cout << "\n";
}


int main()
{
    char v[6] = "Hello";
    char *p = & v[3];

    char x = *p;

    cout << v << "\n";
    cout << p << "\n";
    cout << x << "\n";

    show_int_array_size();
    show_copy_with_for();
    show_with_range_for();
    show_reference_range_for();
}

// vim: set ai sw=4 et sm:
