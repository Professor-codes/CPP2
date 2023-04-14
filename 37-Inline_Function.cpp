#include<iostream>

using namespace std;

inline int product(int a, int b)
{
    return a * b;
}

int main()
{
    int a, b;

    cout<<"Enter number : ";
    cin>>a;
    cout<<"Enter number : ";
    cin>>b;
    cout << endl; 

    cout << "Product value : " << product(a, b)<<endl;
    cout << "Product value : " << product(a, b)<<endl;
    cout << "Product value : " << product(a, b)<<endl;
    cout << "Product value : " << product(a, b)<<endl;
    cout << "Product value : " << product(a, b)<<endl;


    return 0;
}