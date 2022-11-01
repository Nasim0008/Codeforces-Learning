#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int mx=INT_MAX,indx;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(mx>arr[i])
        {
            mx=arr[i];
            indx= i;
        }
    }
    cout<<indx<<endl;
}




