#include <iostream>

using namespace std;

int main()
{
    int a = 2;

    int *b;
    b = &a;
    // int *b = &a;S

    int **c ;
    c = &b;
    // int **c = &b;

    cout << "Address of a : " << &a << endl;
    cout << "Address of a : " << b << endl;
    cout << endl;

    cout << "Value of a : " << a << endl;
    cout << "Value of a : " << *b << endl;
    cout << endl;

    cout << "Address of b : " << &b << endl;
    cout << "Address of b : " << c << endl;
    cout << endl;

    cout << "Value of b : " << **c << endl;
    cout << endl;

    return 0;
}
