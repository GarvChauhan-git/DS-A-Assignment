#include<bits/stdc++.h>
using namespace std ;

int removeElement( vector<int>&arr, int val)
{
    int k=0,i=0;
    int n = arr.size();
    for(i=0; i<n ; i++)
    {
        if(arr[i]!= val)
        {
            arr[k] = arr[i];
            k++;
        }
    }
    return k ;
}

int main()
{
    int v;
    cout<<"Enter the value to remove";
    cin>>v;
    vector<int>arr;
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(3);
    int N = removeElement( arr, v);
    cout<<N;
}
