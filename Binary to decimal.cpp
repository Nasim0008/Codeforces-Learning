#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int decimal =0;
    int i=0;
    while(n>0)
    {
       int last =  n%10;
       decimal += (last* (pow(2,i)));
       i++;
       n/=10;
    }
    cout<<decimal<<endl;

}
