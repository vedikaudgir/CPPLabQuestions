#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

class ArabicRoman
{
private:
    char a[20];
    int value = 0;
    int index = 0;

    int priority(char c)
    {
        if (c == 'I')
            return 1;
        if (c == 'V')
            return 5;
        if (c == 'X')
            return 10;
        if (c == 'L')
            return 50;
        if (c == 'C')
            return 100;
        if (c == 'D')
            return 500;
        if (c == 'M')
            return 1000;
        return 0;
    }
    void romanPerDigit(char c3, char c2, char c1, int n)
    {
        if (n >= 1 && n <= 3)
        {
            for (int i = 0; i < n; i++)
            {
                a[index++] = c1;
            }
        }
        else if (n == 4)
        {
            a[index++] = c1;
            a[index++] = c2;
        }
        else if (n == 5)
        {
            a[index++] = c2;
        }
        else if (n >= 6 && n <= 8)
        {
            a[index++] = c2;
            for (int i = 0; i < n - 5; i++)
            {
                a[index++] = c1;
            }
        }
        else if (n == 9)
        {
            a[index++] = c1;
            a[index++] = c3;
        }
        else if (n == 0)
        {
            a[index++] = ' ';
        }
    }

public:
    int takeRoman()
    {
        cout << "\nEnter the value in roman  - ";
        cin >> a;
        for (int i = 0; a[i] != '\0'; i++)
        {
            if (a[i] != 'I' && a[i] != 'V' && a[i] != 'X' && a[i] != 'L' && a[i] != 'C' && a[i] != 'D' && a[i] != 'M')
            {
                cout << "\nIncorrect Input try again - ";
                takeRoman();
            }
        }
    }
    int takeArabic()
    {
        cout << "\nEnter the value in arabic - ";
        cin >> value;
        if (value >= 4000 || value < 0)
        {
            cout << "\nIncorrect Input try again - ";
            takeArabic();
        }
        if (value == 0)
        {
            cout << "\nDo not exist";
            takeArabic();
        }
    }
    void printRoman()
    {
        if (a[0] == '\0')
        {
            cout << "Invalid Roman numeral.";
        }
        else
        {
            cout << a;
        }
    }
    void arabicToRoman()
    {
        int n = value;
        index = 0;

        while (n >= 1000)
        {
            a[index++] = 'M';
            n -= 1000;
        }

        if (n >= 100)
        {
            romanPerDigit('M', 'D', 'C', n / 100);
            n %= 100;
        }
        if (n >= 10)
        {
            romanPerDigit('C', 'L', 'X', n / 10);
            n %= 10;
        }
        if (n >= 0)
        {
            romanPerDigit('X', 'V', 'I', n);
        }

        a[index] = '\0';
    }
    void romanToArabic()
    {
        for (int i = 0; a[i] != '\0'; i++)
        {
            if (priority(a[i + 1]) > priority(a[i]))
            {
                value -= priority(a[i]);
            }
            else if (priority(a[i + 1]) <= priority(a[i]))
            {
                value += priority(a[i]);
            }
        }
    }

    ArabicRoman operator+(ArabicRoman r2)
    {
        ArabicRoman sum;
        romanToArabic();
        r2.romanToArabic();
        sum.value = value + r2.value;
        sum.arabicToRoman();
        return sum;
    }

    ArabicRoman() {}
    ArabicRoman(ArabicRoman &r)
    {
        value = r.value;
        strcpy(a, r.a);
    }
    ~ArabicRoman() {}
};

int main()
{
    ArabicRoman r1, r2, r, s;
    r1.takeRoman();
    r2.takeRoman();

    r = r1 + r2;
    cout << "\nSum of the numbers is - ";
    r.printRoman();
}