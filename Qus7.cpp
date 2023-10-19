// Write a program to cyclically rotate an array by one.

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr={10,20,30,40,50};
    int size=5;

    int k;
    cout << "Enter k : ";
    cin >> k;

    vector<int> v(arr.size());

    for(int i=0;i<size;i++)
    {
        v[(i+k)%size]=arr[i];
    }

    for(int i=0;i<size;i++)
    {
        cout << v[i] << " ";
    }

}
