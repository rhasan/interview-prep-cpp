/**
A virtual function is a special type of function that resolves to the most-derived 
version of the function with the same signature. To make a function virtual, 
simply place the “virtual” keyword before the function declaration.

http://www.learncpp.com/cpp-tutorial/122-virtual-functions/
**/

#include <string>
#include <iostream>
using namespace std;

class Animal
{
protected:
    std::string m_strName;
 
    // We're making this constructor protected because
    // we don't want people creating Animal objects directly,
    // but we still want derived classes to be able to use it.
    Animal(std::string strName)
        : m_strName(strName)
    {
    }
 
public:
    std::string GetName() { return m_strName; }
    virtual const char* Speak() { return "???"; }
};
 
class Cat: public Animal
{
public:
    Cat(std::string strName)
        : Animal(strName)
    {
    }
 
    virtual const char* Speak() { return "Meow"; }
};
 
class Dog: public Animal
{
public:
    Dog(std::string strName)
        : Animal(strName)
    {
    }
 
    virtual const char* Speak() { return "Woof"; }
};

void Report(Animal &rAnimal)
{
    cout << rAnimal.GetName() << " says " << rAnimal.Speak() << endl;
}
 
int main()
{
    Cat cCat("Fred");
    Dog cDog("Garbo");
 
    Report(cCat);
    Report(cDog);
}
