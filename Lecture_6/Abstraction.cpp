#include <iostream>
using namespace std;
class Car
{
private:
    void fuelCheck()
    {
        cout <<"Checking fuel...\n ";
    }
    void BatteryCheck()
    {
        cout <<"Checking Battery...\n ";
    }

public:
    void start()
    {
        fuelCheck();
        BatteryCheck();
        cout <<"Car Starting";
    }
};

int main()
{
    Car c1;
    c1.start();
    return 0;
}