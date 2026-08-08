#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // this force is use only for sorted array
    vector<int> v = {2, 2, 5, 5, 5, 6, 6};
    int i = 0;
    for (int j = 1; j < v.size(); j++)
    {
        if (v[i] != v[j])
        {
            i++;
            v[i] = v[j];
        }
    }
    for (int k = 0; k <= i; k++) //for printing only single occurence not double after above loop we get[2,5,6,5,5,5,6] so we want print only upto the 2,5,6
    {
        cout << v[k]<<" ";
    }

    return 0;
}