/* subsequence has 3 condition:
 1. it may be contigious
 2. it may not be contigious
 3. it does not maintain the order.
  # total number of subsequence of the given array is (2^n)-1;
 */
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   cout<< "Total number of subsequence is : "<< (long long int)pow(2,n)-1<<endl;
}

