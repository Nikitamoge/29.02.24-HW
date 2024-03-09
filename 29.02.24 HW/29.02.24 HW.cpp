#include <iostream>
#include <cmath>

const double PI = 3.1415926535;

using namespace std;

class Figure
{
protected:
    double side;
public:
    Figure(double s) : side(s) {}
    virtual double Area() { return 0; }
    virtual double Perimeter() { return 0; }
};

class Circle : public Figure
{
public:
    Circle(double r) : Figure(r) {}
    double Area()
    {
        return PI * side * side;
    }
    double Perimeter()
    {
        return 2 * PI * side;
    }
};

class Square : public Figure
{
public:
    Square(double a) : Figure(a) {}
    double Area()
    {
        return side * side;
    }
    double Perimeter()
    {
        return 4 * side;
    }
};

class Hexagon : public Figure
{
public:
    Hexagon(double a) : Figure(a) {}
    double Area()
    {
        return (3 * sqrt(3) * side * side) / 2;
    }
    double Perimeter()
    {
        return 6 * side;
    }
};

void output(const string& name, Figure& figure)
{
    cout << name << " Area: " << figure.Area() << endl;
    cout << name << " Perimeter: " << figure.Perimeter() << endl;
}


int main()
{
    Circle circle(5);
    output("Circle", circle);

    Square square(5);
    output("Square", square);

    Hexagon hexagon(5);
    output("Hexagon", hexagon);
}