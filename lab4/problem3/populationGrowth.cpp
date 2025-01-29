#include <iostream>
#include <cmath>
#include <stdbool.h>
using namespace std;

int main()
{
    int populationA, populationB, rateA, rateB, time;

    cout << endl
         << "Enter current population of town \"A\" - ";
    cin >> populationA;
    cout << endl
         << "Enter current population of town \"B\" - ";
    cin >> populationB;

    cout << endl
         << "Enter current population growth rate of town \"A\" - ";
    cin >> rateA;
    cout << endl
         << "Enter current population growth rate of town \"B\" - ";
    cin >> rateB;

    int p2A = populationA, p2B = populationB, years;
    for (years = 1; p2A <= p2B; years++)
    {
        p2A = populationA * (pow((1 + rateA), years));
        p2B = populationB * (pow((1 + rateB), years));

    }

    cout << "\n After " << years << " years.";
}