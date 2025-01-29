#include <iostream>
#include <stdbool.h>
#include <cmath>
using namespace std;

class Statistics
{
private:
    int n, count = 0, maxCount;
    float mean = 0, mode, median, sD, a[50];

public:
    void numberOfEntries()
    {
        cout << endl
             << "Enter number of elements in the data.";
        cin >> n;
    }
    void readData()
    {
        int i;
        for (i = 0; i < n; i++)
        {
            cout << endl
                 << "Enter element " << i + 1 << " - ";
            cin >> a[i];
        }
    }
    void printData()
    {
        int i;
        for (i = 0; i < n; i++)
        {
            cout << "  " << a[i] << "  ";
        }
    }
    float calculateMean()
    {
        int i;
        for (i = 0; i < n; i++)
        {
            mean += a[i];
        }
        mean /= n;
        return mean;
    }
    float calculateMode()
    {
        int i, j, maxCount = 0, freq[50] = {0};
        for (i = 0; i < n; i++)
        {
            count = 0;
            for (j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    count++;
                }
            }
            if (count > maxCount)
            {
                maxCount = count;
                mode = a[i];
            }
            else if(maxCount == 0)
            {
                return -1;
                cout << "\nMode do not exist !";
            }
            
        }
        return mode;
    }
    float calculateMedian()
    {
        int i, j, swap;
        bool flag;
        for (i = 0; i < n; i++)
        {
            flag = 0;
            for (j = 0; j < n - i - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    swap = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = swap;
                    flag = 1;
                }
            }
            if (flag = 0)
            {
                break;
            }
        }
        if (n % 2 == 0)
        {
            median = (a[(n / 2)] + a[(n / 2) - 1]) / 2;
        }
        else
        {
            median = a[(n / 2)];
        }

        return median;
    }
    float calculateStandardDeviation()
    {
        int i;
        float sigma = 0;
        for (i = 0; i < n; i++)
        {
            sigma += pow((a[i] - mean), 2);
        }
        sD = pow(sigma, 0.5) / n;
        return sD;
    }
};

int main()
{
    Statistics obj;
    obj.numberOfEntries();
    obj.readData();
    obj.printData();
    cout << "\nThe mean of the given data is - " << obj.calculateMean();
    cout << "\nThe mode of the given data is - " << obj.calculateMode();
    cout << "\nThe median of the given data is - " << obj.calculateMedian();
    cout << "\nThe standard Deviation of the given data is - " << obj.calculateStandardDeviation();
}
