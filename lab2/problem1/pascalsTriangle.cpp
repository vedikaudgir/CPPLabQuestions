#include <iostream>
using namespace std;

int factorial(int n)
{
    int i, fact = 1;
    if (n == 0)
    {
        return 1;
    }

    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int combination = 1;
    if (n == 1 || n == 0)
    {
        return 1;
    }

    else if (n < 0 || r < 0)
    {
        cout << "Invalid Input";
        return -1;
    }
    else if (n < r)
    {
        cout << "Invalid Input";
        return -1;
    }
    else
    {
        combination = (factorial(n)) / (factorial(r) * factorial(n - r));
        return combination;
    }
}

void printPascalsTriangle(int l)
{
    int i, j,k;
    for (i = 0; i <= l; i++)
    {
        for (k = (l - i + 1); k > 0; k--)
        {
            cout << "  ";
        }
        
        for (j = 0; j <= i; j++)
        {
            cout << "  " << nCr(i, j) << "  ";
        }
        cout << endl;
    }
}
int main()
{
    int l = 10;
    printPascalsTriangle(l);
    return 0;
}