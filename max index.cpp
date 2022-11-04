#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    pair<int,int>p[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i].first;
        p[i].second=i+1;
    }
    sort(p,p+n);
    for(int i=0;i<n;i++)
    {
        cout<<p[i].second<< " ";
    }
    cout<<endl;
    for(int i=n-1;i>=0;i--)
    {
        cout<<p[i].second<< " ";
    }
    cout<<endl;
}



