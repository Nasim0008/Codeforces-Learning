#include<bits/stdc++.h>
using namespace std;
void decimal_to_binary(int n)
{
    vector<int>binary;
    while(n>0)
    {
        binary.push_back(n%2);
        n/=2;
    }
    reverse(binary.begin(),binary.end());
    for(auto u:binary)
    {
        cout<<u;
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    decimal_to_binary(n);

}
