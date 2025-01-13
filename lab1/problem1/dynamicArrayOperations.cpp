#include <iostream>
#include <stdbool.h>
using namespace std;

void readArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << endl
             << "Enter element"
             << i
             << " - ";
        cin >> a[i];
    }
}
void printArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << " " << a[i] << " ";
    }
}
void findSumAndAverage(int a[], int n)
{
    int i, sum = 0, average;
    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    average = sum / n;
    cout << "\nThe sum of the elements is - "
         << sum
         << "\nThe average of the elements is - "
         << average;
}
void findDuplicates(int a[], int n, int r[])
{
    int i, j, k = 0;
    bool found = 0;
    for (i = 0; i < n; i++)
    {
        found = 0;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] == a[i])
            {
                found = 1;
            }
        }
        if (found == 1)
        {
            r[k] = a[i];
            k++;
        }
    }
    cout << "\nThe duplicates are - ";
    printArray(r, k);
}

int maxInArray(int a[], int n)
{
    int max, i;
    max = a[0];

    for (i = 0; i < n; i++)
    {
        if (a[i] >= max)
        {
            max = a[i];
        }
    }
    return max;
}

int minInArray(int a[], int n)
{
    int min, i;
    min = a[0];

    for (i = 0; i < n; i++)
    {
        if (a[i] >= min)
        {
            min = a[i];
        }
    }
    return min;
}
void findMaximumMinimum(int a[], int n)
{
    int max, min, i;
    max = a[0];
    min = a[0];

    for (i = 0; i < n; i++)
    {
        if (a[i] <= min)
        {
            min = a[i];
        }
        if (a[i] >= max)
        {
            max = a[i];
        }
    }
    cout << "\n the maximum is - " << max << "\nThe minimum is - " << min;
}

void checkPrime(int number)
{
    int i;
    for (i = 2; number % i != 0; i++)
        ;
    if (i == number)
    {
        cout << endl
             << number
             << " is prime";
    }
    else
    {
        cout << endl
             << number
             << " is not prime";
    }
}
int main()
{
    int n;
    cout << endl
         << "Enter n";
    cin >> n;

    int a[n], max, min, r[100];
    readArray(a, n);
    printArray(a, n);
    findSumAndAverage(a, n);
    findDuplicates(a, n, r);
    findMaximumMinimum(a, n);
    max = maxInArray(a, n);
    min = minInArray(a, n);
    checkPrime(min);
    checkPrime(max);
}