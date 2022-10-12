#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m=INT_MAX;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        m=min(m,arr[i]);
    }
    cout<<m<<endl;

}

