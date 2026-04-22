#pragma once
#include <string>
using namespace std;

class Person
{
public:
    Person();
    Person(string newName, float newWeight);
    operator string() const;
    operator float() const;

    ~Person();
    operator int();

    // Overload the add operator
    float operator+(const Person& otherPerson);

    // Relational operators (using name)
    bool operator==(const Person& otherPerson);
    bool operator!=(const Person& otherPerson);

    // Relational operators (using age)
    bool operator<(const Person& otherPerson);
    bool operator>(const Person& otherPerson);

    

private:
    float mWeight;
    string mFirstName;
    int mAge;
};