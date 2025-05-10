//Program in Cpp to implement various operator overloading functions on strings.
//Author - Vedika Udgir

#include <iostream>
#include <cstring>
#include <stdbool.h>
using namespace std;

class String
{
private:
    char *s;

public:
    setter()
    {
        cout << "\nEnter a string - ";
        delete[] s;
        s = new char[100];
        cin.getline(s, 100);
    }
    getter()
    {
        cout << "\nString is - " << s;
    }
    String operator+(const String &s2)
    {
        String result;
        delete[] result.s;

        result.s = new char[strlen(s) + strlen(s2.s) + 1];
        strcpy(result.s, s);
        strcat(result.s, s2.s);
        return result;
    }
    void operator=(const String &s2)
    {
        if (this != &s2)
        {
            delete[] s;
            s = new char[strlen(s2.s) + 1];
            strcpy(s, s2.s);
        }
    }
    bool operator<=(const String &s2)
    {
        bool lessThan;
        if (strcmp(s, s2.s) <= 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    String(String &s2)
    {
        s = new char[strlen(s2.s) + 1];
        strcpy(s, s2.s);
    }
    String()
    {
        s = new char[100];
    }
    ~String()
    {
        delete[] s;
    }
};
int main()
{
    String obj1, obj2, obj3;
    obj1.setter();
    obj1.getter();
    obj2.setter();
    obj1.getter();

    obj3 = obj1;
    obj3.getter();

    obj3 = obj1 + obj2;
    obj3.getter();
}