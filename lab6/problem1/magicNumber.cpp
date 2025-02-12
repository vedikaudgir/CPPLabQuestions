#include <iostream>
using namespace std;

class checkMagicNumber
{
private:
    int matrix[3][3] = {0};
    int magicNumber = sum / 3, sum = 0;

    void fillMatrix()
    {
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                matrix[i][j] = rand();
            }
        }
    }

    void checkSum()
    {
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                sum += matrix[i][j];
            }
        }
    }

public:
    void printArray()
    {
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cout << " " << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    void checkMagicSquare()
    {
    }

    checkMagicNumber() {}
    ~checkMagicNumber() {}
};