#include <iostream>
#include <string>

using namespace std;
// Moving Average
int main()
{
    double Numbers[] = {8, 7, 5, 6, 9, 12, 10};
    double Averages[size(Numbers)];
    for (int i = 0; i < size(Numbers); i++)
    {
        if (i == 0)
        {
            Averages[i] = Numbers[i] / 2;
        }
        else
        {
            Averages[i] = (Numbers[i] + Numbers[i - 1]) / 2;
        }
    }
    cout << "Moving Average data :" << "\n";
    for (double avg : Averages)
    {
        cout << avg << "\n";
    }

    return 0;
}