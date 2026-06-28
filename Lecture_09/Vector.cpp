#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // First method
    //  vector<int> v; //empty array
    //  v.push_back(20);
    //  v.push_back(23);
    //  cout<<v[0]<<" "<<v[1];

    // second Method
    //  vector <int> v={10,20,30,40};
    //  cout<<v[0];
    //  cout<<v[1];
    //  cout<<v[2];

    // third method
    // vector<int> v(5, 50);

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    vector<int> v = {11, 12, 13, 14};

    // for (auto i = v.begin(); i != v.end(); i++)
    // {
    //     cout << *i << " ";
    // }

    // auto it = v.begin() + 3;
    // cout << *it;

    // // Ranged based loop

    // for (auto it : v)
    // {
    //     cout << it << " ";
    // }

    // function of vectors

    cout << v.front() << " " << endl; // gives front element
    cout << v.back() << " " << endl;  // gives the last element
    cout << v.empty() << " " << endl; // check weather the vector is empty or not
    // cout << v.size() << " " << endl;  // before clear
    // v.clear();
    // cout << v.size() << " " << endl; // After clear

    // v.erase(v.begin() + 2); // remove specific elements
    // for (auto x : v)
    // {
    //     cout << x << " ";
    // }

    // v.erase(v.begin(),v.begin() + 3);

    //Ranged based loop
    // for (auto x : v)
    // {
    //     cout <<"Here we delete first three element - " <<x << " ";
    // }

    // v.insert(v.begin() + 4, 15);
    // for (auto x : v)
    // {
    //     cout << x << " "; // here we add 15
    // }

    
     for (auto i = v.rbegin(); i != v.rend(); i++)
     {
         cout << *i << " ";
    }
    return 0;
}