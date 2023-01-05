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
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        bool flag = 0;

        for (int i = 0; i < n; i++)
        {
            if (A[i] == k && i < n - 1)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1 || (n = 1 && A[0] == k))
        {
            cout << "Yes" << endl;
        }

        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}