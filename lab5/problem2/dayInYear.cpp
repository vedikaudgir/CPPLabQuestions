#include <iostream>
#include <stdbool.h>
using namespace std;

class DayInYear
{
private:
    int day, month, year, DOY = 0;
    bool leapYear;
    void readDay()
    {
        cout << "\nEnter the day - ";
        cin >> day;
    }
    void readMonth()
    {
        cout << "\nEnter the month - ";
        cin >> month;
    }
    void readYear()
    {
        cout << "\nEnter year - ";
        cin >> year;
    }

    void checkLeapYear()
    {
        if ((year % 4 == 0) && (year % 100 == 0 && year % 400 != 0))
        {
            leapYear = false;
        }
        else if ((year % 4 == 0) && (year % 100 == 0 && year % 400 == 0))
        {
            leapYear = true;
        }
    }

public:
    void printYear()
    {
        cout << year;
    }

    void readDate()
    {
        readYear();
        checkLeapYear();
        readMonth();
        if (month > 12 || month < 1)
        {
            cout << "\nEnter valid month!";
            readDate();
        }
        readDay();
        if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day > 31 || day < 0))
        {
            cout << "\nEnter valid date!";
            readDate();
        }
        else if ((month == 4 || month == 6 || month == 9 || month == 11) && (day > 30 || day < 0))
        {
            cout << "\nEnter valid date!";
            readDate();
        }
        else if ((month == 2) && (day > 28 || day < 0) && (leapYear == false))
        {
            cout << "\nEnter valid date!";
            readDate();
        }
        else if ((month == 2) && (day > 29 || day < 0) && (leapYear == true))
        {
            cout << "\nEnter valid date!";
            readDate();
        }
    }

    void printDate()
    {
        cout << "\n Date -> "
             << day << " - " << month << " - " << year;
    }

    int dayOfYear()
    {
        int i;
        for (i = 1; i < month; i++)
        {
            if ((i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12))
            {
                // cout << "\n31 added";
                DOY += 31;
            }
            else if ((i == 4 || i == 6 || i == 9 || i == 11))
            {
                // cout << "\n30 added";
                DOY += 30;
            }
            else if ((i == 2) && (leapYear == false))
            {
                // cout << "\n28 added";
                DOY += 28;
            }
            else if ((i == 2) && (leapYear == true))
            {
                // cout << "\n29 added";
                DOY += 29;
            }
        }

        DOY += day;
        // cout << "\nday added" << day;
        return DOY;
    }

    DayInYear()
    {
        cout << "\n\nZero argument constructor called.\n\n";
    }
    DayInYear(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
        cout << "\n\nThree argument constructor called.\n\n";
    }
    ~DayInYear()
    {
        cout << "\n\nDestructor called.\n\n";
    }
};

int main()
{
    DayInYear myObject;
    myObject.readDate();
    myObject.printDate();
    cout << " is the " << myObject.dayOfYear() << " day of the year ";
    myObject.printYear();
}