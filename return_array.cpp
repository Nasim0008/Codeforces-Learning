#include<bits/stdc++.h>
using namespace std;
int *check(int arr[],int low,int high)
{
    sort(arr,arr+high);
    return  arr;
}
int main()
{
    int n;
    cin>>n;
    int arr[n+3];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int *val;
    val=check(arr,1,n);
    for(int i=1;i<=n;i++)
    {
        cout<<val[i]<<" ";
    }
    cout<<endl;
}