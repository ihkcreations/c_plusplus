// learning abstracts in cpp

#include <iostream>
using namespace std;

class AbstractPerson
{
    virtual void personLivingState() = 0;
};

class Person : AbstractPerson
{
public:
    string personName;
    string personAge;
    string personEmail;
    string livingState = "Bangladesh";

    Person(string name, string age, string email)
    {
        personName = name;
        personAge = age;
        personEmail = email;
    }

    void personDetail()
    {
        cout << "Name   : " << personName << endl;
        cout << "Age    : " << personAge << endl;
        cout << "Email  : " << personEmail << endl;
        cout << endl;
    }

    void personLivingState()
    {
        cout << personName << " lives in " << livingState << endl;
    }
};

int main()
{
    Person p1 = Person("Iftekhar", "25", "iftekhar@mail.com");
    Person p2 = Person("Imran", "19", "imran@mail.com");

    p1.personLivingState();
    p2.personLivingState();
}