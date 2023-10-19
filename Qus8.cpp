// find Largest sum contiguous Subarray [V. IMP]

// Kadanes algortihm

#include<iostream>
using namespace std;

int main()
{
    int arr[]={5,-1,7,-3,9};
    int size=5;

    int sum=0;
    int maxi=arr[0];

    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];

        maxi=max(maxi,sum);

        if(sum<0)
        sum=0;
    }
    
    cout << "Max Sum : " << maxi;
    
}