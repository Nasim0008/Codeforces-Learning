#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n + 2];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // starting index 
    for (int i = 0; i < n; i++)
    {
        // ending index
        for(int j=i;j<n;j++)
        {
            // print start index to ending index
            for(int k = i;k<=j;k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}