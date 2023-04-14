#include <iostream>

using namespace std;

int glow = 10;

void fun()
{
    int locl = 10;
}

int main()
{
    int glow = 5;

    int locl = 5;

    cout << "global = " << glow << endl;
    cout << "local  = " << locl << endl;

    return 0;
}