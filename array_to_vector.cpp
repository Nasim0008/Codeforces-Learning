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
    vector<int>v;
    v.assign(arr,arr+n);
    for(auto u:v)
    {
        cout<<u<<" ";
    }
    cout<<endl;
}