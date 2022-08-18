/*
Regular Expression (regex) In C++ A regular expression or
regex is an expression containing a sequence of characters




*/




#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="naskamalimkamal Hossen";
    string p="shohankamalrahman";
    regex r("kamal");//regex keyword contain a substring (kamal) inside the r variable
    cout<<regex_replace(s,r,"")<<endl;
    cout<<regex_replace(p,r," ")<<endl;
}
