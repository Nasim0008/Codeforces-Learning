#include<bits/stdc++.h>
using namespace std;
int count_tailing_zero(int n)
{
    int ans = 0;
    for(int i=5;n/i>=1;i*=5)
    {
        ans+=(n/i);
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int number_of_zero = count_tailing_zero(n);
    cout<< number_of_zero<<endl;
}