#include <iostream>
#include <vector>
using namespace std;
void insertionSort(vector<int> &arr)
{

    for (int i = 1; i < arr.size(); i++)
    {
        for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--)
        {
            swap(arr[j - 1], arr[j]);
        }
    }
}
int main()
{
    vector<int> arr = {1, 3, 4, 5, 2, 8, 6, 7};
    insertionSort(arr);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}