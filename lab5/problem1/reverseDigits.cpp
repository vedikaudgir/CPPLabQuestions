#include <iostream>
using namespace std;

class reverseDigits
{
private:
    int n;

public:
    int reverse = 0, remainder = 0;

    void readNumber()
    {
        cout << "\nEnter any integer to reverse - ";
        cin >> n;
    }

    int reverseNumber()
    {
        int i;
        if (n < 0)
        {
            int temp = (-1) * n;
            for (i = temp; i != 0; i /= 10)
            {
                remainder = i % 10;
                if (remainder == 0)
                {
                    cout << "0";
                }   
                reverse = (reverse * 10) + remainder;
            }
            return ((-1) * reverse);
        }

        else if (n == 0)
        {
            return 0;
        }

        else
        {
            for (i = n; i != 0; i /= 10)
            {
                remainder = i % 10;
                if ((remainder == 0) || (i == 0))
                {
                    cout << "0";
                }        
                reverse = (reverse * 10) + remainder;
            }
            return reverse;
        }
    }

    reverseDigits()
    {
        cout << "\n\nZero argument constructor called.\n\n";
    }
    reverseDigits(int number)
    {
        n = number;
        cout << "\n\nOne argument constructor called.\n\n";
    }
    ~reverseDigits()
    {
        cout << "\n\nDestructor called.\n\n";
    }
};

int main()
{
    reverseDigits MyObject;

    MyObject.readNumber();
    cout << MyObject.reverseNumber();
}