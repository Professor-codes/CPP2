#include <iostream>

using namespace std;

int main()
{
    int a = 6;
    int b = 2;

    // // Arithmetic operator
    // cout << "a + b = " << a + b << endl;
    // cout << "a - b = " << a - b << endl;
    // cout << "a * b = " << a * b << endl;
    // cout << "a / b = " << a / b << endl;
    // cout << "a % b = " << a % b << endl;
    // cout << endl;

    // // Assignment operator
    // a = 6;
    // b = 2;

    // // Comparison operator
    // cout << "a == b is [" << (a == b) << "]" << endl;
    // cout << "a != b is [" << (a != b) << "]" << endl;
    // cout << "a <= b is [" << (a <= b) << "]" << endl;
    // cout << "a >= b is [" << (a >= b) << "]" << endl;
    // cout << "a < b is  [" << (a < b)  <<  "]" << endl;
    // cout << "a > b is  [" << (a > b)  <<  "]" << endl;
    // cout << endl;

    // Logical operator
    cout << "((a == b) && (a != b))  =  "
         << "[" << (a == b && a != b) << "]" << endl;
    cout << "((a == b) || (a != b))  =  "
         << "[" << (a == b || a != b) << "]" << endl;
    cout << endl;
    cout << "(!(a==b)) = "
         << "[" << (!(a == b)) << "]" << endl;

    // 

    return 0;
}