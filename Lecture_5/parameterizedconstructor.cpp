#include <iostream>
using namespace std;

class Student
{public:
    string name;
    int age;

    Student(string n,int a)
    {
        name=n;
        age=a;
    }
};

int main()
{
    Student s1("Divya",18);
    cout<<"The name of s1 :"<<s1.name<<endl;
    cout<<"The age of s1 : "<<s1.age;


    return 0;
}