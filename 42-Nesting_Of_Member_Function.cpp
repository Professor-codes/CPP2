#include <iostream>
#include <string>

using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void check(void);
    void ones(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter binary number : ";
    cin >> s;
}

void binary ::check(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
        // else
        // {
        //     cout << "Binary format is correct" << endl;
        //     exit(0);
        // }
    }
}

void binary::ones(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display(void)
{
    cout << endl;
    cout << "Displaying once compliment binary number " << endl;

    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    binary b;

    b.read();
    b.check();
    // b.display();

    b.ones();
    b.display();

    return 0;
}
