#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n+3];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum =0;
    int mx = INT_MIN;
    int i=0;
    int j=0;
    while(j<n)
    {
        sum+=arr[j];
        if(sum==k)
        {
            mx = max(mx,(j-i+1));
            j++;
        }
        else if(sum<k)
        {
            j++;
        }
        else if(sum>k)
        {
            while(sum>k)
            {
                sum-=arr[i];
                i++;
            }
            if(sum==k)
            {
                mx = max(mx,(j-i+1));
            }
            j++;
        }
    }
    cout<< mx<<endl;
}