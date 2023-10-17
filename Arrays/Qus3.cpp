//Find the "Kth" max and min element of an array 

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={10,54,95,23,71,52,96,73,12,19};
    int size=10;
    int k;

    cout << "Enter k : ";
    cin >> k;

    sort(arr,arr+size);

    cout << "Kth Maximum : " << arr[size-k]  << endl;

    cout << "Kth minimum : " <<arr[k-1];


}