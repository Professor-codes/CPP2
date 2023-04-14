#include <iostream>

using namespace std;

int main()
{
    // // Loops in Arrays using for loop
    // int num[] = {10,20,30,40};

    // cout << "Numbers are : " << endl;

    // for (int i = 0; i <= 3;i++)
    // {
    //     cout << num[i] << endl;
    // }

    // cout << endl;
    // cout << "Done with For Loops in Arrays" << endl;

    // // Loops in Arrays using while loop
    // int num[] = {10, 20, 30, 40};
    // int i=0;
    // cout << "Numbers are : " << endl;

    // while(i<=3)
    // {
    //     cout << num[i] << endl;
    //     i++;
    // }
    // cout << endl;
    // cout << "Done with While Loops in Arrays" << endl;

    // Loops in Arrays using Do While Loop
    int num[] = {10, 20, 30, 40};

    int i = 0;
    cout << "Numbers are" << endl;

    do
    {
        cout << num[i] << endl;
        i++;
    } while (i <= 3);

    cout << endl;
    cout << "Done with Do While Loops in Arrays";

    return 0;
}