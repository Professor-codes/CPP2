#include <iostream>

using namespace std;

int c = 5;

int main()
{
    int a, b, c;

    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;

    c = a + b;

    cout << "a + b = " << c << endl;

    // scope resolution operator
    cout << "Global value = " << c << endl;
    cout << "Global value = " << ::c << endl;

    return 0;
}