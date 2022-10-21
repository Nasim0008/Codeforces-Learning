#include<bits/stdc++.h>
using namespace std;
int main()
{
    int64_t n;
     cin>>n;
     int a,b;
     int flag = 1;
     for(int i=2;i<=n;i++)
     {
         if(flag ==0)
         {
             break;
         }
         for(int j=i+1;j<=n;j++)
         {
             if(n%i==n%j)
             {
                 a=i;
                 b=j;
                flag = 0;
                break;

             }
         }
     }
     cout<<a<< " "<< b<<endl;

}
