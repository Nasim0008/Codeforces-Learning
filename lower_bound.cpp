#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n + 3];
    for (int i = 1; i <=n; i++)
    {
        cin>>arr[i];
    }
    int m;cin>>m;
    int low = lower_bound(arr,arr+n,m)-arr;
    int high = upper_bound(arr,arr+n,m)-arr;
    cout<<low<< " "<<high<<endl;
}