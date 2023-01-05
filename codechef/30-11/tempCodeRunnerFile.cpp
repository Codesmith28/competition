#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int A[n];
    for(int i=0; i<n; i++)
    {
        A[i] = i+1;
    }

    int a = 0;
    for(int i=0; i<n-1; i++)
    {
        for(int j=n-k; j<n; j++)
        {

            if(i==j)
            {
                break;
            }
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }

    return 0;
}