#pragma once
#include <iostream>
using namespace std;

class Notification
{
protected:
    string receiver;
    string text;
public:
    Notification(string r, string t)
    {
        receiver = r;
        text = t;
    }
    void send()
    {
        cout << "send\n";
    }
};

class EmailNotification :public Notification
{
public:
    EmailNotification(string r, string t) :Notification(r, t) {}
    void send()
    {
        cout << "Sent the Email notification \"" << text << "\" to " << receiver << endl;
    }
};

class SMSNotification :public Notification
{
public:
    SMSNotification(string r, string t) :Notification(r, t) {}
    void send()
    {
        cout << "Sent the SMS notification \"" << text << "\" to " << receiver << endl;
    }
};

class PushNotification :public Notification
{
public:
    PushNotification(string r, string t) :Notification(r, t) {}
    void send()
    {
        cout << "Sent the Push notification \"" << text << "\" to " << receiver << endl;
    }
};