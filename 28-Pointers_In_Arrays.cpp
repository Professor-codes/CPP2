#include <iostream>

using namespace std;

int main()
{
    int num[] = {10, 20, 30, 40};
    int i = 0;

    int *p = num;

    cout << "Value " << i << " : " << *(p++) << endl;
    cout << "Value " << i + 1 << " : " << *(p++) << endl;
    cout << "Value " << i + 2 << " : " << *(p++) << endl;
    cout << "Value " << i + 3 << " : " << *(p++) << endl;

    // cout << "Value " << i << " : " << *p << endl;
    // cout << "Value " << i + 1 << " : " << *(p + 1) << endl;
    // cout << "Value " << i + 2 << " : " << *(p + 2) << endl;
    // cout << "Value " << i + 3 << " : " << *(p + 3) << endl;

    return 0;
}
