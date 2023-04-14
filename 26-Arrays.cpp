#include <iostream>

using namespace std;

int main()
{
    int marks[5];

    marks[0] = 90;
    marks[1] = 80;
    marks[2] = 70;
    marks[3] = 60;
    marks[4] = 50;

    cout << "Marks Before ReChecking" << endl;

    cout << marks[0] << endl;
    cout << marks[1] << endl;

    cout << marks[2] << endl;

    cout << marks[3] << endl;
    cout << marks[4] << endl;
    cout << endl;

    cout << "Marks After ReChecking" << endl;

    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    marks[4] = 55;
    cout << marks[4] << endl;

    return 0;
}