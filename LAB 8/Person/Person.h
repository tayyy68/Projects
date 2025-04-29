#pragma once
#include <string>

using namespace std;

class Person{
public:
    Person();
    Person(string name, float newWeight);
    Person(float newWeight);
    ~Person();
    //Overload the add operator
    float operator + (const Person& otherPerson);
    
    // Overload relational operators for names
    bool operator==(const Person& otherPerson);
    bool operator!=(const Person& otherPerson);
    
    // Overload relational operators for age
    bool operator<(const Person& otherPerson);
    bool operator>(const Person& otherPerson);
    
    // Conversion operators
    operator int();
    operator string();
    operator float();

private:
    float mWeight;
    string mFirstName;
    int mAge;
};