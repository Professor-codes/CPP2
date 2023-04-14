#include <iostream>

using namespace std;

int main()
{
    /*
        What is pointer
        Data type which holds the address of other data types
    */

    int a = 2;
    int *b = &a;

    /*
        & --> Address of operator
        * --> Dereference operator
    */

    cout << "Address of a : " << &a << endl;
    cout << "Address of a : " << b << endl;

    cout << "Value of a : " << a << endl;
    cout << "Value of a : " << *b << endl;
    cout << endl;

    char c = 'x';
    char *d = &c;

    cout << "Address of c : " << &c << endl;
    cout << "Address of c : " << d << endl;

    cout << "Value of c : " << c << endl;
    cout << "Value of c : " << *d << endl;
    cout << endl;

    return 0;
}