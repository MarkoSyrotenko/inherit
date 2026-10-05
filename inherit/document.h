#pragma once
#include <iostream>
using namespace std;

class Document
{
protected:
    string name;
    string author;
public:
    Document(string n, string a)
    {
        name = n;
        author = a;
    }
    void open()
    {
        cout << "open\n";
    }
};

class Book :public Document
{
public:
    Book(string n, string a) :Document(n, a) {}
    void open()
    {
        cout << "Opened the book \"" << name << "\" by " << author << endl;
    }
};

class Magazine :public Document
{
public:
    Magazine(string n, string a) :Document(n, a) {}
    void open()
    {
        cout << "Opened the magazine \"" << name << "\" by " << author << endl;
    }
};

class Newspaper :public Document
{
public:
    Newspaper(string n, string a) :Document(n, a) {}
    void open()
    {
        cout << "Opened the newspaper \"" << name << "\" by " << author << endl;
    }
};