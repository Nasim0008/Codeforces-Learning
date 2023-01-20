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
    int pre_sum[n+3];
    pre_sum[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        pre_sum[i]=(arr[i]+pre_sum[i-1]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<pre_sum[i]<< " ";
    }
    cout<<endl;
}