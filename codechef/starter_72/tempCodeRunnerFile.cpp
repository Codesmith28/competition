#include<bits/stdc++.h>
using namespace std;
bool  isprime(int n)
{
    int i;
    bool flag = 1;
    for(i=2; i<sqrt(n); i++)
    {
        if(n%i==0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main()
{
    int n;
    cin>>n;
    isprime(n) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    return 0;
}