
#include<bits/stdc++.h>
using namespace std;
void nasim()
{
    int n,mx=INT_MIN;
    cin>>n;
    int arr[n];
    for(auto& i:arr)
    {
        cin>>i;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=1;j<n;j++)
        {
            mx=max(mx,abs(arr[i]-arr[j]));
        }
    }
    cout<<mx<<endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        nasim();
    }
}

