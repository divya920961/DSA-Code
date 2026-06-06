#include <iostream>
using namespace std;
class Animal
{
public:
    string name;
    int age;

    void eat()
    {
        cout << "Eating...";
    }

    void sound()
    {
        cout << "Sound ...";
    }
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Boww..boww.."<<endl;
    }
};

class Cat : public Animal
{
public:
    void sound()
    {
        cout << "Meow meow....";
    }
};

int main()
{
    Dog d1;
    d1.sound();
    Cat c1;
    c1.sound();
    return 0;
}