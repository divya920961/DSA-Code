#include <iostream>
using namespace std;

class Student
{
public:
    string name = "divya";
    int age = 18;

    void show()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};
int main()
{
    Student s1;
    s1.show();
    //copied value i.e, copy con
    Student s2(s1);
    s2.show();

    return 0;
}