#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Ali Seifi

    // get the input from user
    cout << "Enter your text : \n";
    string input;
    getline(cin, input);

    // Split the input to an Array :
    string inputs[3];
    int index = 0;
    for (char c : input)
    {
        if (c == ',')
        {
            index++;
        }
        else
        {
            inputs[index] += c;
        }
    }
    // show the array members length using foreach :
    int count = 0;
    for (string s : inputs)
    {
        cout << "index " << count << " : " << size(s) << " len"<< "\n";
        count++;
    }

    return 0;
}