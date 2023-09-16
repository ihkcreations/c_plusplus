#include <iostream>
using namespace std;

// constructor variables and class variables names has to be different
class Person
{
public:
    string personName;
    string personAge;
    string personEmail;

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
};

int main()
{

    Person p1 = Person("Iftekhar", "25", "iftekhar@mail.com");
    Person p2 = Person("Imran", "19", "imran@mail.com");

    p1.personDetail();
    p2.personDetail();
}