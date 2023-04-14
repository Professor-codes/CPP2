#include<iostream>

using namespace std;

int sum(int a, int b);
// int sum(int a, b);   // not acceptable
// int sum(int, int);   // acceptable

int main()
{
    int num1, num2;

    cout << "Enter number : ";
    cin >> num1;
    cout << "Enter number : ";
    cin >> num2;

    cout << "Sum is : " << sum(num1, num2);

    return 0;
}

// Formal parameters    -->     a, b
// Actual parameters    -->     num1, num2

// Formal parameters will be taking values from actual parameters 
int sum(int a, int b)
{
    int c = a + b;

    return c;
}