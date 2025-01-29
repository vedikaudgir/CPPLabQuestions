#include <iostream>
#include <stdbool.h>
using namespace std;

void multiplesOfThree(int a, int b)
{
    if (a > b)
    {
        cout << "\nInvalid data !!!";
        return;
    }

    int i;
    bool found = 0;

    cout << endl
         << "Multiples of three are - " << endl;
    for (i = a; i <= b; i += 3)
    {
        if (i % 3 == 0)
        {
            cout << "  " << i << "  ";
            found = 1;
        }
    }

    if (found == 0)
    {
        cout << endl
             << "No multiples of three between " << a << "and " << b << "!";
    }
}
void multiplesOfFive(int a, int b)
{
    if (a > b)
    {
        cout << "\nInvalid data !!!";
        return;
    }
    int i;
    bool found = 0;
    cout << endl
         << "Multiples of five are - " << endl;
    for (i = a; i <= b; i += 5)
    {
        if (i % 5 == 0)
        {
            cout << "  " << i << "  ";
            found = 1;
        }
    }

    if (found == 0)
    {
        cout << endl
             << "No multiples of three between " << a << "and " << b << "!";
    }
}
int main()
{
    int lowerLimit, upperLimit;

    cout << "\nEnter lower limit - ";
    cin >> lowerLimit;

    cout << "\nEnter upper limit - ";
    cin >> upperLimit;

    multiplesOfThree(lowerLimit, upperLimit);
    multiplesOfFive(lowerLimit, upperLimit);
}
