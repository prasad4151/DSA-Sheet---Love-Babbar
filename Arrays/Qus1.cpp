// Reverse the array

#include<iostream>
using namespace std;


// 1st approach
// int main()
// {
//     int arr[]={10,20,30,40,50};
//     int size=5;

//     for(int i=size-1;i>=0;i--)
//     {
//         cout << arr[i] << " ";
//     }
// }


//2nd apporach
int main()
{
    int arr[]={10,20,30,40,50};
    int size=5;

    int i=0;
    int j=size-1;

    while(i<=j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    for(int i=0;i<size;i++)
    {
        cout <<arr[i] << " ";
    }
}