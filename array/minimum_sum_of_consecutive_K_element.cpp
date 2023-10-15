#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int arr[n + 3];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mn = INT_MAX;
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    mn = sum;
    for (int i = k; i < n; i++)
    {
        sum += (arr[i] - arr[i - k]);
        mn = min(mn ,sum);
    }
    cout << mn << endl;
}