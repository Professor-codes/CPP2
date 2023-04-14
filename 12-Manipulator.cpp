#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Manipulators

    int a = 20, b = 400, c = 6000;

    // without setw
    cout << "Values without setw" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << endl;

    // with setw
    cout << "Values with setw" << endl;
    cout << "a = " <<setw(4)<< a << endl;
    cout << "b = " <<setw(4)<< b << endl;
    cout << "c = " <<setw(4)<< c << endl;
    cout << endl;

    return 0;
}