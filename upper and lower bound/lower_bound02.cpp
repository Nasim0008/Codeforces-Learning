// if the searhing value is not present and the value is not the last value then it return the next index 
#include<bits/stdc++.h>

using namespace std;
int main()
{
    vector<int>v= {1,2,3,4,5,7,8,9};

    int indx = lower_bound(v.begin(),v.end(),6)-v.begin();
    cout<< indx<<endl;


}