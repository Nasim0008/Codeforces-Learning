#include<bits/stdc++.h>
using namespace std;
int atmostsum(int arr[],int n,int k)
{
    int cnt =0;
    int sum =0;
    int mx = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>k)
        {
            cnt=0;
            continue;
        }
        if((arr[i]+sum)<=k)
        {
            cnt++;
            sum+=arr[i];
        }
        else
        {
            sum+=arr[i];
            cnt++;

            while(sum>k)
            {
                sum-=arr[i-cnt+1];
                cnt--;
            }
        }

        mx = max(mx,cnt);
    }
    return mx;
}
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

    int ans = atmostsum(arr,n,k);
    cout<<ans<<endl;

}