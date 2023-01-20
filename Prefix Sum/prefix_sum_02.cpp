#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+3];
    vector<int>v;
    int pre_sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        pre_sum+=arr[i];
        v.push_back(pre_sum);
    }
    for(auto u:v)
    {
        cout<<u<< " ";
    }
    cout<<endl;
}