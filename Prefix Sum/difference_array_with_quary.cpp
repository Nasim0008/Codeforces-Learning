#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int dif[n+3]={0};
    int q;
    cin>>q;
    while(q--)
    {
        int l,r,value;
        cin>>l>>r>>value;
        dif[l]+=value;
        dif[r+1]-=value;
    }
    for(int i=1;i<n;i++)
    {
        dif[i]+=dif[i-1];
    }
    for(int i=0;i<n;i++)
    {
        arr[i]+=dif[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<  " ";
    }
    cout<<endl;
}