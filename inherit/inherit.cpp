#include <iostream>
using namespace std;
#include "figure.h"
#include "transport.h"
#include "character.h"
#include "document.h"
#include "notification.h"

int main()
{
    Circle obj1(4);
    Rectangle obj2(2, 3);
    Triangle obj3(3, 4, 5, 3);
    obj1.printInfo();
    obj2.printInfo();
    obj3.printInfo();

    Car obj4("car", 200, "brand1");
    Train obj5("train", 300, "brand2");
    Airplane obj6("plane", 1000, "brand3");
    obj4.move();
    obj5.move();
    obj6.move();

    Warrior obj7("Warrior", 200);
    Mage obj8("Mage", 180);
    Archer obj9("Archer", 140);
    obj7.attack();
    obj8.attack();
    obj9.attack();

    Book obj10("book", "John");
    Magazine obj11("magazine", "Jane");
    Newspaper obj12("newspaper", "Jean");
    obj10.open();
    obj11.open();
    obj12.open();

    EmailNotification obj13("name@gmail.com", "notification 1");
    SMSNotification obj14("+380123456789", "notification 2");
    PushNotification obj15("User", "notification 3");
    obj13.send();
    obj14.send();
    obj15.send();
}