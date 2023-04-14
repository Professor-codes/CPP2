#include <iostream>

using namespace std;

int fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * fact(n - 1);
}

int main()
{
    // Factorial

    // 6 = 6 * 5 * 4 * 3 * 2 * 1

    // n! = n * (n-1)!

    int num;

    cout << "Enter number   : ";
    cin >> num;

    cout << "Factorial of " << num << " : " << fact(num) << endl;

    return 0;
}