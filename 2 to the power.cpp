#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<< "From 2 to the power 0: "<<endl;
    for(int i=0;i<10;i++)
    {
    int ans=(1<<i);
    cout<<ans<<endl;
    }

    cout<< "From 2 to the power 1: "<<endl;
    for(int i=0;i<10;i++)
    {
    int ans=(2<<i);
    cout<<ans<<endl;
    }

}

