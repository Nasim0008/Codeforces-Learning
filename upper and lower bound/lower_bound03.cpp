// if the searhing value is appears multiple times then it return the first appears index
#include<bits/stdc++.h>

using namespace std;
int main()
{
    vector<int>v= {1,2,3,3,3,4,5,7,8,9};

    int indx = lower_bound(v.begin(),v.end(),3)-v.begin();
    //int index = lower_bound(arr,arr+n,value)-arr;
    cout<< indx<<endl;


}