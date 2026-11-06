#include <iostream>
using namespace std;

int main()
{
    int n, result = 0;
    cout << "Enter the no of element of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elments: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        result += arr[i];
    }

    int average = result / n;
    cout <<"Average :"<< average;
}