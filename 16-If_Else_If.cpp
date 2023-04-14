#include <iostream>

using namespace std;

int main()
{
    int age;

    cout << "Enter age : ";
    cin >> age;

    if (age > 25)
    {
        cout << "You can not come to party" << endl;
    }
    else if (age < 12)
    {
        cout << "You are not come to party" << endl;
    }
    else if (age < 18)
    {
        cout << "You are kid and you must need kid pass for party" << endl;
    }
    else
    {
        cout << "You can come to party" << endl;
    }
    return 0;
}