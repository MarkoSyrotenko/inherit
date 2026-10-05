#pragma once
#include <iostream>
using namespace std;

class Character
{
protected:
    string name;
    int hp;
public:
    Character(string n, int h)
    {
        name = n;
        hp = h;
    }
    void attack()
    {
        cout << "attack\n";
    }
};

class Warrior :public Character
{
public:
    Warrior(string n, int h) :Character(n, h) {}
    void attack()
    {
        cout << name << " (" << hp << "HP) attacks with a sword\n";
    }
};

class Mage :public Character
{
public:
    Mage(string n, int h) :Character(n, h) {}
    void attack()
    {
        cout << name << " (" << hp << "HP) attacks using magic\n";
    }
};

class Archer :public Character
{
public:
    Archer(string n, int h) :Character(n, h) {}
    void attack()
    {
        cout << name << " (" << hp << "HP) shoots an arrow\n";
    }
};