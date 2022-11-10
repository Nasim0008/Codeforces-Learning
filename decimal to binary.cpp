#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   vector<int>v;
   while(n!=0)
   {
       n/=2;
       int rem=n%2;
       v.push_back(rem);
   }
   for(int i=0;i<v.size();i++)
   {
       cout<<v[i];
   }
   cout<<endl;


}

