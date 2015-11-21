/*
 * loop_accept.cpp
 *
 * Straustrup section 2.2.4: Tests and Loops
 * Uses cout, cin, shows testing (if, switch), and looping.
 */

// vim: set ai sw=4 et sm:

#include <iostream>
#include <complex>
using namespace std;

bool accept()
{
    cout << "Do you want to proceed (y on n)?\n";

    char answer = 0;
    cin >> answer;

    if (answer == 'y') return true;
    return false;
}

bool accept2()
{
    cout << "Do you want to proceed (y on n)?\n";

    char answer = 0;
    cin >> answer;

    switch (answer) {
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            cout << "I'll take that for a no.\n";
            return false;
    }
}

bool accept3()
{
    int tries = 1;
    while (tries < 4) {
        cout << "Do you want to proceed (y on n)?\n";
        char answer = 0;
        cin >> answer;

        switch (answer) {
            case 'y':
                return true;
            case 'n':
                return false;
            default:
                cout << "I don't understand that.\n";
                ++tries;
        }
    }
    cout << "I'll take that for a no.\n";
    return false;
}

int main()
{
    cout << "I wanna do some stuff!\n";
    if ( accept() )
        cout << "Okay; I'm doing it!\n";
    else
        cout << "Not gonna happen.\n";

    cout << "I wanna do some more stuff!\n";
    if ( accept2() )
        cout << "Okay; I'm doing it!\n";
    else
        cout << "Not gonna happen.\n";

    cout << "I wanna do some more stuff!\n";
    if ( accept3() )
        cout << "Okay; I'm doing it!\n";
    else
        cout << "Not gonna happen.\n";
}
