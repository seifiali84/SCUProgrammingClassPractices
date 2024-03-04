#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    // set random seed time base
    srand(time(0));

    // generate 1000 row of data
    string data;
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (j != 7)
            {
                data += to_string(rand() % 1001) + ",";
            }
            else
            {
                data += to_string(rand() % 1001) + "@";
            }
        }
    }

    // Split data to 2D Array of int
    int DataMatrix[1000][8];
    int row = 0;
    int column = 0;
    string CurrentNumber;
    for (char c : data)
    {
        if (c == ',')
        {
            DataMatrix[row][column] = stoi(CurrentNumber);
            column++;
            CurrentNumber = "";
        }
        else if (c == '@')
        {
            DataMatrix[row][column] = stoi(CurrentNumber);
            column = 0;
            row++;
            CurrentNumber = "";
        }
        else
        {
            CurrentNumber += c;
        }
    }

    // // show Generated data from matrix
    // for (int i = 0; i < 1000; i++)
    // {
    //     cout << "Row " << i + 1 << " : ";
    //     for (int j = 0; j < 8; j++)
    //     {
    //         if (j != 7)
    //         {
    //             cout << DataMatrix[i][j] << ",";
    //         }
    //         else
    //         {
    //             cout << DataMatrix[i][j] << "\n";
    //         }
    //     }
    // }

    // Show data in Format :
    for (int j = 0; j < 8; j++)
    {
        cout << "------------\n";
        cout << "| Sensor " << j + 1 << " |\n";
        cout << "---------------------------------------------------------------------\n";
        for (int i = 0; i < 1000; i++)
        {
            cout << "Second " << i + 1 << " : " << DataMatrix[i][j] << "\n";
        }
    }
    return 0;
}