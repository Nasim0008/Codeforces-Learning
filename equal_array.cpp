#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int arr[n+4];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(arr[0]==arr[n-1])
    {
        cout<< "all the eliments are same"<<endl;
    }
    else
    {
        cout<< "all the eliments are not same"<<endl;
    }
}