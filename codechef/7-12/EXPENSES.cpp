#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a = pow(2,x);

        while(n--)
        {
            a = a/2;
        }
        cout<<a<<endl;
    }
    return 0;
}