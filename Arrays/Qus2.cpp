// Find the maximum and minimum element in an array

#include<iostream>
#include<limits>
using namespace std;

int maxNumber(int arr[],int size)
{
    int max=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}


int minNumber(int arr[],int size)
{
    int min=INT16_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
    return min;
}

int main()
{
    int arr[]={12,50,96,31,42,26,87,74,32,11};
    int size=10;

    cout << "Maximum Number : " << maxNumber(arr,size) << endl;
    cout << "Minimum Number : " << minNumber(arr,size); 
}