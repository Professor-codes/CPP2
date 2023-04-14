#include<iostream>

using namespace std;

int main()
{
    int a = 2;
    int b = 5;

    cout<<"Before swap A :"<<a<<endl;
    cout<<"Before swap B :"<<b<<endl;
    cout << endl;

    swap(a,b);
    cout<<"After swap A :"<<a<<endl;
    cout<<"After swap B :"<<b<<endl;

    return 0;
}

int swap(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}
