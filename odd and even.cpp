
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int64_t n;
        cin>>n;
        if(n&1)
        {
            cout<<(n/2)+1<<endl;
        }
        else
        {
            cout<< (n/2)<<endl;
        }
    }//cout<<n/2 + n%2<<endl;
    //cout << (n+1) / 2 << endl;
}
