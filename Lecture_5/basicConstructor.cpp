#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;
    Student()
    {
        cout << "Constructor is called....";
    }
};
int main()
{
    Student s1;

    return 0;
}