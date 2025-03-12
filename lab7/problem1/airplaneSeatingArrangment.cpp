#include <iostream>
using namespace std;

class AirplaneSeatingArrangment
{
private:
    char seats[13][6], seatClass, row, coloumn;

    void defaultSeats()
    {
        int i, j;
        for (i = 0; i < 13; i++)
        {
            for (j = 0; j < 6; j++)
            {
                seats[i][j] = '*';
            }
        }
    }
    int checkRows()
    {
        return (row >= 1 && row <= 13) ? 1 : 0;
    }
    int checkColoumns()
    {
        return (coloumn >= 1 && coloumn <= 6) ? 1 : 0;
    }
    int checkFirstClass()
    {
        return (row >= 1 && row <= 2) ? 1 : 0;
    }
    int checkBusinessClass()
    {
        return (row >= 3 && row <= 7) ? 1 : 0;
    }
    int checkEconomyClass()
    {
        return (row >= 8 && row <= 13) ? 1 : 0;
    }
    int seatEmpty()
    {
        return (seats[row][coloumn] == '*') ? 1 : 0;
    }

public:
    void printMenu()
    {
        cout << "\nEnter 1 to book seat in first class.";
        cout << "\nEnter 2 to book seat in business class.";
        cout << "\nEnter 3 to book seat in first class.";
        cin >> seatClass;
    }
    void takeInputSwitch()
    {
        
    }
    void showSeatAvailability()
    {
        int i, j;
        for (i = 0; i < 13; i++)
        {
            for (j = 0; j < 6; j++)
            {
                cout << " " << seats[i][j] << " ";
            }
            cout << endl;
        }
    }
    void seatBooking()
    {
        do
        {
            cout << "\nEnter the prefered row: ";
            cin >> row;
        } while (checkRows() == 1);
        do
        {
            cout << "\nEnter the prefered coloumn: ";
            cin >> row;
        } while (checkColoumns() == 1); 
    }
    AirplaneSeatingArrangment() {}
    ~AirplaneSeatingArrangment() {}
};