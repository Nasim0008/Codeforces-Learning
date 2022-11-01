#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int mn = INT_MIN,indx;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>mn)
        {
            mn= arr[i];
            indx = i;
        }
    }
    cout<<indx<<endl;
}




