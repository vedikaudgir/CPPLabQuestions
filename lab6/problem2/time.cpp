#include <iostream>
#include <stdbool.h>
using namespace std;

void printSingleDigits(int number)
{
    if (number == 0)
    {
        cout <<"  ";
    }   
    else if (number == 1)
    {
        cout << "One ";
        
    }
    else if (number == 2)
    {
        cout << "Two ";
    }
    else if (number == 3)
    {
        cout << "Three ";
    }
    else if (number == 4)
    {
        cout << "Four ";
    }
    else if (number == 5)
    {
        cout << "Five ";
    }
    else if (number == 6)
    {
        cout << "Six ";
    }
    else if (number == 7)
    {
        cout << "Seven ";
    }
    else if (number == 8)
    {
        cout << "Eight ";
    }
    else if (number == 9)
    {
        cout << "Nine ";
    }
    else if (number == 10)
    {
        cout << "Ten ";
    }
    else if (number == 11)
    {
        cout << "Eleven ";
    }
    else if (number == 12)
    {
        cout << "Twelve ";
    }
    else if (number == 13)
    {
        cout << "Thirteen ";
    }
    else if (number == 14)
    {
        cout << "Fourteen ";
    }
    else if (number == 15)
    {
        cout << "Fifteen ";
    }
    else if (number == 16)
    {
        cout << "Sixteen ";
    }
    else if (number == 17)
    {
        cout << "Seventeen ";
    }
    else if (number == 18)
    {
        cout << "Eighteen ";
    }
    else if (number == 19)
    {
        cout << "Nineteen ";
    }

}
void printInWords0to59(int number)
{
    if (number/10 == 0)
    {
        printSingleDigits(number);
    }
    else if (number/10 == 1)
    {
        printSingleDigits(number);
    }
    else if (number/10 == 2)
    {
        cout << "Twenty ";
        number %= 10;
        printSingleDigits(number);
    }
    else if (number/10 == 3)
    {
        cout << "Thirty ";
        number %= 10;
        printSingleDigits(number);
    }
    else if (number/10 == 4)
    {
        cout << "Fourty ";
        number %= 10;
        printSingleDigits(number);
    }
    else if (number/10 == 5)
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
        if (hours24 < 12 && hours24 > 0)
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
        cout << "\nTime in 24 hour format is: " << hours24 <<": "<< minutes24;
    }
    void printTimeIn12()
    {
        cout << "\nTime in 12 hour format is: " << hours12 <<": "<< minutes12 << " ";
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

    convertFormat(){}
    convertFormat(int h, int m)
    {
        hours24 = h;
        minutes24 = m;
    }
    ~convertFormat(){}
};

int main()
{
    convertFormat x;
    x.readTimeIn24();
    x.printTimeInWords();
}
