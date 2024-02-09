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

    return 0;
}
