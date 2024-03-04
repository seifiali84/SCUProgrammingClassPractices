#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // set seed for random generation
    srand(time(0));

    // generate 10 Numbers
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

    // get the min of Array
    int Minimum = Numbers[0];
    for (int i : Numbers)
    {
        if (i < Minimum)
        {
            Minimum = i;
        }
    }
    cout << "Minimum Value : " << Minimum << "\n";

    // get the max of Array
    int Maximum = Numbers[0];
    for (int i : Numbers)
    {
        if (i > Maximum)
        {
            Maximum = i;
        }
    }
    cout << "Maximum Value : " << Maximum << "\n";

    // sort data using selection sort algorithm
    for (int i = 0; i < 10; i++)
    {
        int MinIndex = i;
        for (int j = i + 1; j < 10; j++)
        {
            if (Numbers[MinIndex] > Numbers[j])
            {
                MinIndex = j;
            }
        }
        if (MinIndex != i)
        {
            swap(Numbers[i], Numbers[MinIndex]);
        }
    }

    // show sorted Array
    for (int i = 0; i < 10; i++)
    {
        if (i != 9)
        {
            cout << Numbers[i] << ",";
        }
        else
        {
            cout << Numbers[i] << "\n";
        }
    }

    return 0;
}