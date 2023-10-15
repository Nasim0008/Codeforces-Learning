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
    int start_ind;
    int end_ind;
    int sum = 0;
    int mx = INT_MIN;
    int i = 0;
    int j = 0;
    while (j < n)
    {
        sum += arr[j];
        if (sum == k)
        {
            mx = max(mx, (j - i + 1));
            int value = j - i + 1;
            if (mx == value)
            {
                start_ind = i;
                end_ind = j;
            }

            j++;
        }
        else if (sum < k)
        {
            j++;
        }
        else if (sum > k)
        {
            while (sum > k)
            {
                sum -= arr[i];
                i++;
            }
            if (sum == k)
            {
                mx = max(mx, (j - i + 1));
                int value = j - i + 1;
                if (mx == value)
                {
                    start_ind = i;
                    end_ind = j;
                }
            }
            j++;
        }
    }
    cout << mx << endl;
    cout<< start_ind<<" "<<end_ind<<endl;
    for(int i=start_ind;i<=end_ind;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}