#include <iostream>
using namespace std;
int main()
{
    // The first way taught in class:
    cout << "The First Way : \n";

    cout << "****\n";
    cout << "***\n";
    cout << "**\n";
    cout << "*\n";

    // Another way not yet taught in class :
    cout << "\nThe Second Way : \n";

    for(int i = 4; i > 0 ; i--){
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        cout << "\n";
    }

    // in just one line :
    cout << "\nin just one line : \n";
    cout << "****\n***\n***\n**\n*\n";
    
    return 0;
}
