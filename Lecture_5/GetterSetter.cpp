#include <iostream>
using namespace std;

class Students
{
private:
    string name = "Divya";
    string email = "Divya@gmail.com";
    int age = 18;

public:
    void getData()
    {
        cout << name << endl;
        cout << email << endl;
        cout << age << endl;
    }
    void setData()
    {
        name = "Disha";
    }
};
int main()
{
    Students s1;
    s1.setData();
    s1.getData();

    return 0;
}