#include <iostream>
using namespace std;

int dtb(int n)
{
    int b = 0;
    int q;
    int r;

    while (n)
    {
        r = n % 2;
        q = n / 2;
        b = b * 10 + r;
        n = n / 2;
    }
    return b;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        
        while (q--)
        {
            int k, l1, r1, l2, r2;
            int count = 0;

            for (int i = l1 - 1; i < r1; i++)
            {
                for (int j = l2 - 1; j < r2; j++)
                {
                    int x = dtb(A[i]) ^ dtb(A[j]);

                    while (k + 1)
                    {
                        x = x / 10;
                    }

                    if (x % 10 == 1)
                    {
                        count++;
                    }
                }
            }

            cout << count << endl;
        }
    }
    return 0;
}