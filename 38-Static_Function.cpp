#include<iostream>

using namespace std;

inline int fun(int a, int b)
{
    static int c;
    c = c + 1;

    return a + b + c;
}

int main()
{
    int a, b;

    cout << "Enter number : " << endl;
    cin >> a >> b;

    cout << "Value is : " << fun(a, b)<<endl;
    cout << "Value is : " << fun(a, b)<<endl;
    cout << "Value is : " << fun(a, b)<<endl;
    cout << "Value is : " << fun(a, b)<<endl;
    cout << "Value is : " << fun(a, b)<<endl;

    return 0;
}

// //

// #include <iostream>

// using namespace std;

// float moneyRec(int currentmoney, float factor = 1.04)
// {
//     return currentmoney * factor;
// }

// int main()
// {
//     int a, b;

//     cout << "Enter value : " << endl;
//     cin >> a >> b;

//     int money = 100000;
//     cout << endl;

//     cout << "[ For general ]" << endl;
//     cout << "You have        : " << money << " Rs in your account" << endl;
//     cout << "You will recive : " << moneyRec(money) << " after a year " << endl;
//     cout << endl;

//     cout << "[ For VIP ]" << endl;
//     cout << "You have        : " << money << " Rs in your account" << endl;
//     cout << "You will recive : " << moneyRec(money, 1.1) << " after a year " << endl;

//     return 0;
// }