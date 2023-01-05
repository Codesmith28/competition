#include<iostream>
using namespace std;

// product of array elements
int prod(int a[],int n)
{
    int p = 1;
    for(int i=0;i<n;i++)
    {
        p = p*a[i];
    }
    return p;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }




    }
}