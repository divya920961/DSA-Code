#include <iostream>
using namespace std;

class Parent
{
protected:
    string name = "Divya";
};

class child : protected Parent{

public:
    void function()
    {
        cout << name;
    }
};

int main()
{
    child c1;
    c1.function();

    return 0;
}