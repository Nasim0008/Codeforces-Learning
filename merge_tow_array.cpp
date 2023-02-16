#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int a[n];
    int b[n];
    int all[n+m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    merge(a,a+n,b,b+m,all);
    for(auto u:all)
    {
        cout<<u<< " ";
    }
    cout<<endl;

}