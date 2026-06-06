#include <iostream>
using namespace std;

class bank
{
private:
    int bankbalance = 5000;

public:
    void getbalance()
    {
        cout << bankbalance;
    }
    void setbankbalance(int n)
    {
        bankbalance+=n; //this is not related to enc
    }
};

int main()
{
    bank b1;
    b1.setbankbalance(1000);
    b1.getbalance();

    return 0;
}