#include <iostream>
using namespace std;

class Students{
    public:
    string name;
    string email;
    int age;
};
int main()
{
    Students s1;
    s1.name ="Divya";
      s1.email ="Divya@gmail.com";
      s1.age =18;
      cout<<s1.name<<s1.email<<s1.age;
    return 0;
}