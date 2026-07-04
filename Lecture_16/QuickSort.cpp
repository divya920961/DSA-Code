#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    i++;
    swap(arr[high],arr[i]);
    return i;
}

void quickSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int pIdx = partition(arr, low, high);
    quickSort(arr, low, pIdx - 1);
    quickSort(arr, pIdx + 1, high);
}
int main()
{
    vector<int> arr = {1, 3, 2, 6, 5, 4};
    quickSort(arr, 0, arr.size() - 1);
    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}