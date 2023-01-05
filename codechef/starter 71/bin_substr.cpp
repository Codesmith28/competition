#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;



    }
    return 0;
}

// incomplete !!

/* 
operation:
    select a prefix from 's' and flip all the characters
    can be repeated any number of times
to find:
    minimum number of operations such that we find a substring of length k such that bits = 1


100101
011011
100111
011111
111111

we find to make such substr
if we use trapped 0s === 2 operations 
untrapped zeros === 1 operation
*/