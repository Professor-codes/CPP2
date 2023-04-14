#include<iostream>

using namespace std;

enum Meal
{
    breakfast,
    lunch,
    dinner
};

int main()
{
    Meal m1 = dinner;
    cout << m1 << endl;
    cout << endl;

    cout << (m1 == 0) << endl;
    cout << (m1 == 2) << endl;

    return 0;
}