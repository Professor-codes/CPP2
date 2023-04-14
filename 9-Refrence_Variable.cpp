#include <iostream>

using namespace std;

int main()
{
    float x = 22;
    float &y = x;

    cout <<"x = "<< x << endl;
    cout <<"y = "<< y << endl;

    return 0;
}