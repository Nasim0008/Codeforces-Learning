#include<bits/stdc++.h>
using namespace std;
int sz(vector<long long> & v)
{
    int sex = v.size();
    return sex;
}

int main()
{
    int n;
    cin>>n;
    vector<long long>v;
    while(n--)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    int cnt = sz(v);
    cout<<cnt<<endl;
}