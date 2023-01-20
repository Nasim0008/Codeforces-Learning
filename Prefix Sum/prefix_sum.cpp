#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+3];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int a[n+3];// prefix_sum array
    partial_sum(arr,arr+n,a);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<< " "<<arr[i]<<endl;
    }
    
}