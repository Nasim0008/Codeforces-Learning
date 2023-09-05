#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    while(a>0 and b>0)
    {
        if(a>b)
        {
            a = a%b;
        }
        else
        {
            b = b%a;
        }
    }
    return max(a,b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    int value = gcd(a,b);
    cout<<value<<endl;
}