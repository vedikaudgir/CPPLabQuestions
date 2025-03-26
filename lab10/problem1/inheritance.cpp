#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

class First
{
    string bookName;
    int bookNumber;

public:
    virtual void putData()
    {
        cout << "Enter book's name - ";
        cin >> bookName;
        cout << endl
             << "Enter book Number";
        cin >> bookNumber;
    }
    virtual void getData()
    {
        cout << endl
             << "The bookName is - "
             << bookName
             << endl
             << "The bookNumber is - "
             << bookNumber;
    }

    First() {}
};

class Second
{
private:
    string authorName;
    string publisher;

public:
    virtual void putData()
    {
        cout << endl
             << "Enter authorName - ";
        cin >> authorName;
        cout << endl
             << "Enter publisher - ";
        cin >> publisher;
    }
    virtual void getData()
    {
        cout << endl
             << "The author is - "
             << authorName;
        cout << endl
             << "The publisher is - "
             << publisher;
    }

    Second(){}
};

class Third : public First, public Second
{
private:
    int numberOfPages;
    int yearOfPublication;

public:
    void putData()
    {
        First ::putData();
        Second ::putData();
        cout << endl
             << "Enter numberOfPages - ";
        cin >> numberOfPages;
        cout << endl
             << "Enter yearOfPublication - ";
        cin >> yearOfPublication;
    }
    void showData()
    {
        First ::putData();
        Second ::putData();
        cout << endl
             << "The numberOfPages is - "
             << numberOfPages;
        cout << endl
             << "The yearOfPublication is - "
             << yearOfPublication;
    }

    Third() : First(),Second() {}
};
int main()
{
    Third obj[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        obj[i].putData();
    }
    for (i = 0; i < 3; i++)
    {
        obj[i].showData();
    }  
}