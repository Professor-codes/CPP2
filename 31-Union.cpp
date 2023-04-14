#include <iostream>

using namespace std;

union money
{
    int rice;
    char ch;
    float pounds;
};

int main()
{
    // Use only one data type at a time
    
    union money m1;

    // m1.rice = 35;
    // m1.ch = 'z';
    // m1.pounds = 1.555;

    // cout << "Value of rice   : " << m1.rice << endl;
    // cout << "Value of ch     : " << m1.ch << endl;
    // cout << "Value of pounds : " << m1.pounds << endl;

    m1.rice = 35;
    cout << m1.rice << endl;
    m1.ch = 'x';
    cout << m1.ch << endl;
    m1.pounds = 1.555;
    cout << m1.pounds << endl;

    return 0;
}