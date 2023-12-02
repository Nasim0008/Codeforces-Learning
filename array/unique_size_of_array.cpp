#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+4];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // sort(arr,arr+n);
    int sz = unique(arr,arr+n)-arr;
    cout<<sz<<endl;
    unique(arr,arr+n);
    for(int i=0;i<sz;i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;

}