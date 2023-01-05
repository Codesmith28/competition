#include<iostream>
using namespace std;

bool pallindrom(int A[],int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        if(A[i]!=A[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int A[n];
        int count=0;
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }

        if(pallindrom(A,n))
        {
            cout<<count<<endl;
        }
        else
        {
            
        }

    }
}