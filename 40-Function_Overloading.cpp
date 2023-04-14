#include <iostream>

using namespace std;

int sum(int a, int b)
{
    cout << "Using two arguments " << endl;
    return a + b;
}

int sum(int a, int b, int c)
{
    cout << "Using three arguments " << endl;
    return a + b + c;
}

int main()
{
    cout << "Sum is : " << sum(2, 1) << endl;
    cout << "Sum is : " << sum(2, 1,1) << endl;

    return 0;
}


// //
// #include <iostream>

// using namespace std;

// // cylinder
// int vol(double r, int h)
// {
//     return (3.14 * r * r * h);
// }

// // cube
// int vol(int a)
// {
//     return (a * a * a);
// }

// // rectangle
// int vol(int l, int b, int h)
// {
//     return (l * b * h);
// }

// int main()
// {
//     cout << "Volume of cylinder : " << vol(2, 5) << endl;

//     cout << "Volume of circle : " << vol(2) << endl;

//     cout << "Volume of cube : " << vol(2) << endl;

//     cout << "Volume of rectangle : " << vol(2, 4, 6) << endl;

//     return 0;
// }