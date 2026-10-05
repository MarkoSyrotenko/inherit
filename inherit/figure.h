#pragma once
#include <iostream>
using namespace std;

class Figure
{
protected:
    double a;
public:
    Figure(double _a)
    {
        a = _a;
    }
    void printInfo()
    {
        cout << "printInfo\n";
    }
};

class Circle :public Figure
{
public:
    Circle(double r) :Figure(r) {}
    void printInfo()
    {
        cout << "R = " << a << endl;
        cout << "P = " << 2 * 3.14 * a << endl;
        cout << "S = " << 3.14 * a * a << endl << endl;
    }
};

class Rectangle :public Figure
{
    double b;
public:
    Rectangle(double _a, double _b) :Figure(_a)
    {
        b = _b;
    }
    void printInfo()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "P = " << 2 * (a + b) << endl;
        cout << "S = " << a * b << endl << endl;
    }
};

class Triangle :public Figure
{
    double b;
    double c;
    double h;
public:
    Triangle(double _a, double _b, double _c, double _h) :Figure(_a)
    {
        b = _b;
        c = _c;
        h = _h;
    }
    void printInfo()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
        cout << "h = " << h << endl;
        cout << "P = " << a + b + c << endl;
        cout << "S = " << 0.5 * a * h << endl << endl;
    }
};