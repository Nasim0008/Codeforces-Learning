#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int n,m;
    n=a.size();
    m=b.size();
    int ans=INT_MIN;
   for(int len=1;len<=min(n,m);len++)
   {
    for(int i=0;i+len<=n;i++)
    {
        for(int j=0;j+len<m;j++)
        {
            if(a.substr(i,len)==b.substr(j,len))
            {
                ans = max(ans,len);
            }
        }
    }
   }
   cout<<ans<<endl;
}