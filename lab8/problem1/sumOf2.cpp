#include <iostream>
#include <stdlib.h>
#include <stdbool.h>
using namespace std;

class SumOf2
{
private:
    int n = 1;
    int a[20];

public:
    void setn()
    {
        cout << "\nEnter number of terms - ";
        cin >> n;
    }
    void setArray()
    {
        for (int i = 0; i < n; i++)
        {
            cout << "\nEnter element " << i;
            cin >> a[i];
        }
    }

    void getArray()
    {
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "  " << *(a + i) << "  ";
        }
    }
    void printSum()
    {
        bool found = false;
        int i, j, k;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                for (k = j + 1; k < n; k++)
                {
                    if (a[i] == a[j] + a[k])
                    {
                        printf("\n %d = %d + %d", a[i], a[j], a[k]);
                        found = true;
                    }
                }
            }
        }
        if (found == false)
        {
            printf("\nNo such sums found.");
        }
    }
    SumOf2() {}
    ~SumOf2() {}
};

int main()
{
    SumOf2 obj;
    obj.setn();
    obj.setArray();
    obj.getArray();
    obj.printSum();
}