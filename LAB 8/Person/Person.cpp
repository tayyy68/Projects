#include "Person.h"
#include <string>

// Default constructor
Person::Person() : mWeight(0.0f), mFirstName(""), mAge(0) {}

// Constructor with name and weight parameters
Person::Person(string name, float newWeight) : mWeight(newWeight), mFirstName(name), mAge(0) {}

// Constructor with weight parameter
Person::Person(float newWeight) : mWeight(newWeight), mFirstName(""), mAge(0) {}

// Destructor
Person::~Person() {}

// Overloaded + operator to add two Person's weights
float Person::operator+(const Person& otherPerson) {
    return this->mWeight + otherPerson.mWeight;
}
bool Person::operator==(const Person& otherPerson) {
    return this->mFirstName == otherPerson.mFirstName;
}

bool Person::operator!=(const Person& otherPerson) {
    return !(*this == otherPerson);
}

bool Person::operator<(const Person& otherPerson) {
    return this->mAge < otherPerson.mAge;
}

bool Person::operator>(const Person& otherPerson) {
    return this->mAge > otherPerson.mAge;
}

Person::operator int() {
    return mAge;
}

Person::operator string() {
    return mFirstName;
}

Person::operator float() {
    return mWeight;
}
