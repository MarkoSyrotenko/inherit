#pragma once
#include <iostream>
using namespace std;

class Transport
{
protected:
    string name;
    double maxspeed;
    string brand;
public:
    Transport(string n, double s, string b)
    {
        name = n;
        maxspeed = s;
        brand = b;
    }
    void move()
    {
        cout << "move\n";
    }
};

class Car :public Transport
{
public:
    Car(string n, double s, string b) :Transport(n,s,b) {}
    void move()
    {
        cout << "The " << brand << " car \"" << name << "\" is driving at " << maxspeed << " km/h\n";
    }
};

class Train :public Transport
{
public:
    Train(string n, double s, string b) :Transport(n, s, b){}
    void move()
    {
        cout << "The " << brand << " train \"" << name << "\" is moving at " << maxspeed << " km/h\n";
    }
};

class Airplane :public Transport
{
public:
    Airplane(string n, double s, string b) :Transport(n, s, b){}
    void move()
    {
        cout << "The " << brand << " airplane \"" << name << "\" is flying at " << maxspeed << " km/h\n";
    }
};