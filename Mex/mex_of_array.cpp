#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+2];
    int mex = n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]!=i)
        {
            mex = min(mex,i);
        }
    }
    cout<<mex<<endl;
}