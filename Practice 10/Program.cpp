#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
    string Name;
    string Breed; // نژاد;
    int LegsCount;
    bool disposition; // اهلی یا وحشی (0 : وحشی)
    string FavorFood;
};

int main()
{
    Animal a1;
    a1.Name = "Sag";
    a1.Breed = "Golden";
    a1.LegsCount = 4;
    a1.disposition = 1;
    a1.FavorFood = "meal";

    return 0;
}