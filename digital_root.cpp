/*
The digital root of a non-negative integer is the single digit value obtained by an
 iterative process of summing digits, on each iteration using the result 
from the previous iteration to compute a digit sum. 
The process continues until a single-digit number is reached.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int digital_root = ((n-1)%9)+1 ;
    cout<< digital_root<<endl;
    int k;
    cin>>k;
    int kth_number_of_digital_root  =  ((k-1)*9)+digital_root;
    cout<< kth_number_of_digital_root<<endl;
}