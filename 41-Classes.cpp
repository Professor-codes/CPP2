// #include <iostream>

// using namespace std;

// class Employee
// {
// private:
//     int a, b, c;

// public:
//     int d, e;

//     void setdata(int a1, int b1, int c1);

//     void getdata()
//     {
//         cout << "Value of a : " << a << endl;
//         cout << "Value of b : " << b << endl;
//         cout << "Value of c : " << c << endl;
//         cout << "Value of d : " << d << endl;
//         cout << "Value of e : " << e << endl;
//     }
// };

// void Employee::setdata(int a1, int b1, int c1)
// {
//     a = a1;
//     b = b1;
//     c = c1;
// }

// int main()
// {
//     Employee e1;

//     // public
//     e1.d = 4;
//     e1.e = 5;

//     // private
//     e1.setdata(1, 2, 3);
//     e1.getdata();

//     return 0;
// }

#include <iostream>

using namespace std;

class employee
{
private:
    int a, b, c;

public:
    int d, e;

    void setdata(int a1, int b1, int c1); // declaration
    void getdata()
    {
        cout << "The value of a : " << a << endl;
        cout << "The value of b : " << b << endl;
        cout << "The value of c : " << c << endl;
        cout << "The value of d : " << d << endl;
        cout << "The value of e : " << e << endl;
    }
};

void employee ::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    employee harry;

    // harry.a = 10  // This will throw error as a is private
    harry.d = 4;
    harry.e = 5;
    harry.setdata(1, 2, 3); // private
    harry.getdata();

    return 0;
}