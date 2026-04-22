#include "Person.h"

// Default constructor
Person::Person() {
    mWeight = 0.0f;
    mFirstName = "";
    mAge = 0;
}

// Convert Person to string (return first name)
Person::operator string() const {
    return mFirstName;
}

// Convert Person to float (return weight)
Person::operator float() const {
    return mWeight;
}
// Parameterized constructor
Person::Person(string newName, float newWeight) {
    mFirstName = newName;
    mWeight = newWeight;
    mAge = 0;

    
}

// Destructor
Person::~Person() {}

// Overload + operator
float Person::operator+(const Person& otherPerson) {
    return this->mWeight + otherPerson.mWeight;
}

// Overload == (compare names)
bool Person::operator==(const Person& otherPerson) {
    return this->mFirstName == otherPerson.mFirstName;
}

// Overload != (compare names)
bool Person::operator!=(const Person& otherPerson) {
    return this->mFirstName != otherPerson.mFirstName;
}

// Overload < (compare age)
bool Person::operator<(const Person& otherPerson) {
    return this->mAge < otherPerson.mAge;
}

// Overload > (compare age)
bool Person::operator>(const Person& otherPerson) {
    return this->mAge > otherPerson.mAge;
}

Person::operator int(){
   
    return mAge;

}