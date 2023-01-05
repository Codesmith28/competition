#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int A[n];
        for (int x = 0; x < n; x++)
        {
            A[x] = x + 1;
        }

        for(int i=0; i<n; i++)
        {
            int temp = A[n-i];
            A[n-i] = A[i];
            A[i] = temp;
        }
        
        

    }
}