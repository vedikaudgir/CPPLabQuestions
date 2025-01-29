#include <iostream>
using namespace std;

int checkPrime(int n)
{
    int i;
    for (i = 2; n % i != 0; i++)
        ;
    if (i == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int sumOfPrimes(int lowerLimit, int upperLimit)
{
    if (lowerLimit < 0 || lowerLimit > upperLimit)
    {
        cout << "Invalid Input!";
        return -1;
    }

    int sumOfPrimes = 0, i, j;
    for (i = lowerLimit; i <= upperLimit; i++)
    {
        for (j = 2; i % j != 0; j++)
            ;
        if (i == j)
        {
            sumOfPrimes += i;
        }
    }
    return sumOfPrimes;
}

void twinPrimes(int lowerLimit, int upperLimit)
{
    int i, j, diff = 0;
    for (i = lowerLimit; i <= upperLimit; i++)
    {
        for (j = 2; i % j != 0; j++);
        if (i == j)
        {
            if (checkPrime(j + 2))
            {
                cout << endl
                     << j << " and " << j + 2 << " are twin prime numbers.";
            }
        }
    }
}

int main()
{
    int lowerLimit, upperLimit, s;

    cout << "\nEnter lower limit - ";
    cin >> lowerLimit;

    cout << "\nEnter upper limit - ";
    cin >> upperLimit;

    s = sumOfPrimes(lowerLimit, upperLimit);
    cout << "\nThe sum of primes from " << lowerLimit << " to " << upperLimit << " is - " << s;

    twinPrimes(lowerLimit,upperLimit);
}