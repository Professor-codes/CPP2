#include<iostream>

using namespace std;

int main()
{
    int age;

    cout << "Enter age : ";
    cin >> age;

    if(age<18)
    {
        cout << "You can not come to party" << endl;
    }
    else
    {
        cout << "You can come to party" << endl;
    }
    return 0;
}