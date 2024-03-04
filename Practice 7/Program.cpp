#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    // set seed for random numbers
    srand(time(0));
    // generate 10 numbers
    int Numbers[10];
    for (int i = 0; i < 10; i++)
    {
        Numbers[i] = rand();
        if (i != 9)
        {
            cout << Numbers[i] << ",";
        }
        else
        {
            cout << Numbers[i] << "\n";
        }
    }
    // Sum all numbers
    int Sum = 0;
    for (int num : Numbers)
    {
        Sum += num;
    }
    // Calculate the Average of numbers
    double Average = Sum / 10.0;
    // Calculate Sum of Square of difference of Average and Values
    double SumOfSqrDifAvgVal = 0;
    for (int num : Numbers)
    {
        SumOfSqrDifAvgVal += (num - Average) * (num - Average);
    }

    double Variance = SumOfSqrDifAvgVal / 10.0;
    double StandardDeviation = sqrt(Variance);

    // show data properties :
    cout << "Average : " << Average << "\n";
    cout << "Variance : " << Variance << "\n";
    cout << "Standard Deviation : " << StandardDeviation << "\n";
    return 0;
}