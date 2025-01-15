#include <iostream>
using namespace std;

int main()
{
    int i, j,k, l = 5;
    for (i = 0; i <= l; i++)
    {
        for (k = (l - i + 1); k >= 0; k--)
        {
            cout << "  ";
        }
        
        for (j = 0; j <= i; j++)
        {
            cout << "  A  ";
        }
        cout << endl;
    }
}