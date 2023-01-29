// if the searhing value is greater than the last value then return the last index of the vector
#include<bits/stdc++.h>

using namespace std;
int main()
{
    vector<int>v= {1,2,3,4,5,6,7,8,9};

    int indx = lower_bound(v.begin(),v.end(),5)-v.begin();
    cout<< indx<<endl;


    indx = lower_bound(v.begin(),v.end(),98)-v.begin();
    cout<< indx<<endl;


}