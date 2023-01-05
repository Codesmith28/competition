#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x = 2 * n;
        int A[x];
        for (int i = 0; i < x; i++)
        {
            cin >> A[i];
        }

        int cf = 0;
        int mf = 0;

        for (int i = 0; i < x; i++)
        {
            cf = 0;
            for (int j = 0; j < x; j++)
            {
                if (A[i] == A[j] && i != j)
                {
                    cf++;
                }
            }

            mf = max(cf, mf);
        }

        if (mf + 1 >= 3)
        {
            cout << "No\n";
        }

        else
        {
            cout << "Yes\n";
        }
    }

    return 0;
}