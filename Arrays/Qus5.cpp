// Move all the negative elements to one side of the array 

// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     int arr[]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
//     int n=9;

//     vector<int> pos;
//     vector<int> neg;

//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]>0)
//         pos.push_back(arr[i]);
//         else
//         neg.push_back(arr[i]);
//     }

//     int size=neg.size();
//     int size2=pos.size();

//     for(int i=0;i<size;i++)
//     {
//         cout << neg[i] << " ";
//     }
//     for(int i=size;i<size+size2;i++)
//     {
//         cout << pos[i] << " ";
//     }
// }

#include<iostream>
using namespace std;

int main()
{
    int arr[]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n=9;

    int low=0;
    int high=n-1;

    while(low<=high)
    {
        if(arr[low]<0)
        low++;
        else if(arr[high]>0)
        high--;
        else
        swap(arr[low],arr[high]);
    }

    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}