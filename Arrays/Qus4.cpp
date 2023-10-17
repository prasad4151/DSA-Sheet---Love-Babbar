// Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo


//1st approach
// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[]={1,2,0,0,1,2,2,2,1,0,0,1,2,0,1};
//     int n=15;

//     int cnt0=0;
//     int cnt1=0;
//     int cnt2=0;

//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]==0)
//         cnt0++;
//         else if(arr[i]==1)
//         cnt1++;
//         else 
//         cnt2++;
//     }

//     for(int i=0;i<cnt0;i++)
//     {
//         arr[i]=0;
//     }
//     for(int i=cnt0;i<cnt0+cnt1;i++)
//     {
//         arr[i]=1;
//     }
//     for(int i=cnt0+cnt1;i<n;i++)
//     {
//         arr[i]=2;
//     }

//     for(int i=0;i<n;i++)
//     {
//         cout << arr[i] << " ";
//     }
// }


//2nd approach
#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,0,0,1,2,2,2,1,0,0,1,2,0,1};
    int n=15;

    int low=0;
    int mid=0;
    int high=n-1;

    while(mid<=high)
    {
        if(arr[mid==0])
        {
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
        }
    }
}