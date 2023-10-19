// Find the Union and Intersection of the two sorted arrays.

#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
using namespace std;

int main()
{
    int arr1[]={4,52,1,89,36,33,12,71,22,10};
    int arr2[]={52,64,73,19,22,89,54};

    int size=10;
    int size2=7;

    set<int> ans;

    for(int i=0;i<size;i++)
    {
        ans.insert(arr1[i]);
    }
    for(int i=0;i<size2;i++)
    {
        ans.insert(arr2[i]);
    }
    
    //UNION ELEMENTS
    cout << "Number of union elements are : " << ans.size() << endl;

    int cnt=0;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size2;j++)
        {
            if(arr1[i]==arr2[j])
            cnt++;
        }
    }
    cout << "Number of union elements are : " << size+size2-cnt << endl;

    //INTERSECTION ELEMENT
    vector<int> v;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size2;j++)
        {
            if(arr1[i]==arr2[j])
            v.push_back(arr1[i]);
        }
    }

    for(int  i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }

}