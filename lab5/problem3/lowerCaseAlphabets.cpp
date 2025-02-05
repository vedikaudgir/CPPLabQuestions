#include <iostream>
#include <string.h>
using namespace std;

class Strings
{
private:
    char sentence[100];

public:
    int numberOfLowerCaseAlphabets = 0;
    void setString()
    {
        cout << "\nEnter the string - ";
        scanf("%s", sentence);
    }
    int countLowerCase()
    {
        int i;
        for (i = 0; sentence[i] != '\0'; i++)
        {
            if (sentence[i] >= 97 && sentence[i] <= 122)
            {
                numberOfLowerCaseAlphabets++;
                cout << "++\n";
            }
        }
    }

    Strings()
    {
        cout << "\n\nzero argument constructor called!\n\n";
    }
    Strings(char s[])
    {
        strcpy(s,sentence);
        cout << "\n\nzero argument constructor called!\n\n";
    }
    ~Strings()
    {
        cout << "\n\nDestructor called!\n\n";
    }
};

int main()
{
    Strings myObject;
    myObject.setString();
    cout << "\nNumber of lower case alphabets in the given string is - " << myObject.numberOfLowerCaseAlphabets;
}
