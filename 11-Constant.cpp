#include <iostream>

using namespace std;

int main()
{
    // int a = 2;
    // cout << "Value of a was : " << a << endl;
    // a = 4;
    // cout << "Value of a is : " << a << endl;

    // char c = 'x';
    // cout << "Value of c was : " << c << endl;
    // c = '24';
    // cout << "Value of c is : " << c << endl;

    // Constant
    const int a = 2;
    cout << "Value of a was : " << a << endl;
    a = 4; // You will get an error
    cout << "Value of a is : " << a << endl;

    const char c = 'x';
    cout << "Value of c was : " << c << endl;
    c = '24'; // You will get an error 
    cout << "Value of c is : " << c << endl;

    return 0;
}