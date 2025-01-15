#include <iostream>
#include <cmath>
using namespace std;

float areaOfTriangle(float a, float b, float c)
{
    float s, area;
    s = (a + b + c) / 2.0;
    area = sqrt(((s) * (s - a) * (s - b) * (s - c)));
    return area;
}
float areaOfSquare(float s)
{
    float area;
    area = s * s;
    return area;
}
float areaOfRectangle(float l, float b)
{
    float area;
    area = l * b;
    return area;
}
float areaOfRhombus(float d1, float d2)
{
    float area;
    area = 0.5 * d1 * d2;
    return area;
}
float areaOfCone(float r, float h)
{
    float area, l = sqrt((r * r) + (h * h));
    area = 3.14 * r * l;
    return area;
}
float areaOfCylinder(float r, float h)
{
    float area;
    area = 6.28 * r * (h + r);
    return area;
}
float areaOfCube(float s)
{
    float area;
    area = 6.0 * s * s;
    return area;
}
float areaOfTrapezium(float a, float b, float h)
{
    float area;
    area = ((a + b) * h) / 2;
    return area;
}
float areaOfCircle(float r)
{
    float area;
    area = 3.14 * r * r;
    return area;
}

int main()
{
    int choice;
    cout <<endl
         << "Enter 1 to calculate area of triangle"
         <<endl
         << "Enter 2 to calculate area of square"
         <<endl
         << "Enter 3 to calculate area of reactangle"
         <<endl
         << "Enter 4 to calculate area of rhombus"
         <<endl
         << "Enter 5 to calculate area of cone"
         <<endl
         << "Enter 6 to calculate area of cylinder"
         <<endl
         << "Enter 7 to calculate area of cube"
         <<endl
         << "Enter 8 to calculate area of circle"
         <<endl;
    cout << "\nEnter choice - ";
    cin >> choice;

    
    switch (choice)
    {
    case 1:
    {
        int a, b, c;
        cout << "\nEnter the sides of the triangle - ";
        cin >> a >> b >> c;
        cout << endl
             << "The area of the triangle is - "
             << areaOfTriangle(a, b, c);
        break;
    }
    case 2:
    {
        int s;
        cout << "\nEnter the side of square - ";
        cin >> s;
        cout << endl
             << "The area of the square is - "
             << areaOfSquare(s);
        break;
    }
    case 3:
    {
        int l,b;
        cout << "\nEnter the sides of the rectangle - ";
        cin >> l >> b;
        cout << endl
             << "The area of the rectangle is - "
             << areaOfRectangle(l,b);
        break;
    }
    case 4:
    {
        int d1,d2;
        cout << "\nEnter the diagonals of the rhombus - ";
        cin >> d1, d2;
        cout << endl
             << "The area of the rhombus is - "
             << areaOfRhombus(d1,d2);
        break;
    }
    case 5:
    {
        int r,h;
        cout << "\nEnter the radius and height of the cone - ";
        cin >> r, h;
        cout << endl
             << "The area of the cone is - "
             << areaOfCone(r,h);
        break;
    }
    case 6:
    {
        int r,h;
        cout << "\nEnter the radius and height of the cylinder - ";
        cin >> r, h;
        cout << endl
             << "The area of the cylinder is - "
             << areaOfCylinder(r,h);
        break;
    }
    case 7:
    {
        int s;
        cout << "\nEnter the side of cube - ";
        cin >> s;
        cout << endl
             << "The area of the cube is - "
             << areaOfCube(s);
        break;
    }
    case 8:
    {
        int r;
        cout << "\nEnter the radius of circle - ";
        cin >> r;
        cout << endl
             << "The area of the square is - "
             << areaOfCircle(r);
        break;
    }
    default:
        cout << "INVALID INPUT";
        main();
        break;
    }
    return 0;
}