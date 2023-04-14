#include <iostream>
#include <string>

using namespace std;

class number
{
    string s;

public:
    void read(void);
    void check(void);
    void onescomp(void);
    void display(void);
};

void number ::read(void)
{
    cout << "Enter binary number : " << endl;
    cin >> s;
}

void number ::check(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void number ::onescomp(void)
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

void number ::display(void)
{
    cout << "Displaying ones compliment binary number " << endl;
    
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    number n;

    n.read();
    n.check();

    n.onescomp();
    n.display();

    return 0;
}