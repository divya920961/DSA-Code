#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] > v[i - 1])
        {
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> v = {10 ,20 ,30 ,40 ,50 ,60 };

    cout << isSorted(v);
    return 0;
}