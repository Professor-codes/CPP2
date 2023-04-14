#include <iostream>

using namespace std;

int main()
{
    // int password;

    // cout << "Enter password : ";
    // cin >> password;

    // switch (password)
    // {
    // case 1:
    //     cout << "Password : 1234" << endl;
    //     break;
    // case 2:
    //     cout << "Password : 1010" << endl;
    //     break;
    // case 3:
    //     cout << "Password : 0000" << endl;
    //     break;
    // case 4:
    //     cout << "Password : 1111" << endl;
    //     break;
    // default:
    //     cout << "Wrong Password" << endl;
    //     break;
    // }

    char password;

    cout << "- Number" << endl;
    cout << "- Character" << endl;
    cout << "- Mixed" << endl;
    cout << "Enter password type : ";
    cin >> password;

    switch (password)
    {
    case 'N':
        cout << "Password : 12341010";
        break;

    case 'C':
        cout << "Password : abcdazaz";
        break;

    case 'M':
        cout << "Password : 1234abcd";
        break;

    default:
        cout << "REenter password" << endl;
        break;
    }

    return 0;
}