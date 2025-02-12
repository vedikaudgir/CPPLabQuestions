#include <iostream>
#include <stdbool.h>
using namespace std;

string numberNames[20] = {" ", "One ", "Two ", "Three ", "Four ", "Five ", "Six ", "Seven ", "Eight ", "Nine ", "Ten", "Eleven ", "Twelve ", "Thirteen ", "Fourteen ", "Fifteen ", "Sixteen ", "Seventeen ", "Eighteen ", "Nineteen "};
void printSingleDigits(int number)
{
    cout << numberNames[number];
}
void printInWords0to59(int number)
{
    if (number / 10 == 0)
    {
        printSingleDigits(number);
    }
    else if (number / 10 == 1)
    {
        printSingleDigits(number);
    }
    else if (number / 10 == 2)
    {
        cout << "Twenty ";
        number %= 10;
        printSingleDigits(number);
    }
    else if (number / 10 == 3)
    {
        cout << "Thirty ";
        number %= 10;
        printSingleDigits(number);
    }
    else if (number / 10 == 4)
    {
        cout << "Fourty ";
        number %= 10;
        printSingleDigits(number);
    }
    else if (number / 10 == 5)
    {
        cout << "Fifty ";
        number %= 10;
        printSingleDigits(number);
    }
}
class convertFormat
{
private:
    int hours24, minutes24;
    int hours12, minutes12;
    bool meridian;

    void readHoursIn24()
    {
        cout << "\nEnter hours in 24 hour format: ";
        cin >> hours24;
    }
    void readMinutesIn24()
    {
        cout << "\nEnter minutes: ";
        cin >> minutes24;
    }

    void convertIn12()
    {
        if (hours24 <= 12 && hours24 > 0)
        {
            hours12 = hours24;
            meridian = 0;
        }
        else if (hours24 < 24 && hours24 > 12)
        {
            hours12 = hours24 - 12;
            meridian = 1;
        }
        minutes12 = minutes24;
    }

public:
    void readTimeIn24()
    {
        do
        {
            readHoursIn24();
        } while (hours24 >= 24 || hours24 < 0);
        do
        {
            readMinutesIn24();
        } while (minutes24 >= 59 || minutes24 < 0);
    }
    void printTimeIn24()
    {
        cout << "\nTime in 24 hour format is: " << hours24 << ": " << minutes24;
    }
    void printTimeIn12()
    {
        cout << "\nTime in 12 hour format is: " << hours12 << ": " << minutes12 << " ";
        meridian == 0 ? cout << "P.M." : cout << "A.M.";
    }

    void printTimeInWords()
    {
        convertIn12();
        cout << "\nThe time is - \n";
        if (hours24 == 12 && minutes24 == 0)
        {
            cout << "Noon";
            return;
        }
        else if (hours24 == 0 && minutes24 == 0)
        {
            cout << "Midnight";
            return;
        }

        printInWords0to59(hours12);
        printInWords0to59(minutes12);
        meridian == 0 ? cout << " A.M." : cout << " P.M.";
    }

    convertFormat() {}
    convertFormat(int h, int m)
    {
        hours24 = h;
        minutes24 = m;
    }
    ~convertFormat() {}
};

int main()
{
    convertFormat x;
    int exit = 0;
    do
    {
        x.readTimeIn24();
        x.printTimeInWords();
        cout << "\nEnter 0 to exit - ";
        cin >> exit;
    } while (exit != 0);
}
