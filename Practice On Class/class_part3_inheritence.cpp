// learning abstracts in cpp

#include <iostream>
using namespace std;

class AbstractPerson
{
    virtual void personLivingState() = 0;
};

class Person : AbstractPerson
{

private:
    string personName;
    string personAge;
    string personEmail;
    string livingState = "Bangladesh";

public:
    Person(string name, string age, string email)
    {
        personName = name;
        personAge = age;
        personEmail = email;
    }

    string getName()
    {
        return personName;
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

class Student : public Person
{

public:
    string inClass;

    Student(string name, string age, string email, string inCls) : Person(name, age, email)
    {
        inClass = inCls;
    }

    void studentReadsIn()
    {
        cout << getName() << " reads in " << inClass << endl;
    }
};

int main()
{

    Student s1 = Student("Mustakin", "12", "mustaking@mail.com", "Class 2");
    s1.personDetail();
    s1.personLivingState();
    s1.studentReadsIn();
}