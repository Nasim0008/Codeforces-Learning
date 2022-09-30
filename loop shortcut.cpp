#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto& u:v)
    {
        cin>>u;
    }
    for(auto u:v)
    {
        cout<<u<< " ";
    }
    cout<<endl;
}
