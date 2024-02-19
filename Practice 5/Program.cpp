#include <iostream>
#include <string>

using namespace std;

int main()
{
    // define valid names :
    string ValidNames[6] = {"Ali", "Mohammad", "Ramin", "Maryam", "Zahra"};

    // get the name of user
    cout << "Enter your Name : ";
    string input;
    cin >> input;
    bool IsLogin = false;
    for (string name : ValidNames)
    {
        if (name == input)
        {
            cout << "ba movafaghiat vared shodid!"
                 << "\n";
            IsLogin = true;
        }
    }
    if (!IsLogin)
    {
        ValidNames[5] = input;
        cout << input << " Signed Up!";
    }
    return 0;
}