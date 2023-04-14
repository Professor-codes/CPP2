#include <iostream>

using namespace std;

typedef struct employee
{
    int id;
    char favCh;
    float salary;
} emp;

int main()
{
    emp e1;

    e1.id = 10;
    e1.favCh = 'z';
    e1.salary = 120000;

    cout << "Employee 1 id     : " << e1.id << endl;
    cout << "Employee 1 favCh  : " << e1.favCh << endl;
    cout << "Employee 1 salary : " << e1.salary << endl;

    return 0;
}