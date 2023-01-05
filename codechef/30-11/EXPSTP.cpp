#include <iostream>
using namespace std;

int mini(int n, int x, int y)
{
    int a = abs(n - x);
    int b = abs((n / 2) - x);
    int c = abs((n / 2) - y);
    int d = abs(n - y);

    return (min(a, min(b, min(c, d))));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x1, y1, x2, y2;
        cin >> n >> x1 >> y1 >> x2 >> y2;

        int max = abs(x1 - x2) + abs(y1 - y2);

        if (x1 == x2 || y1 == y2)
        {
            cout << 1 << endl;
        }

        else if ((x1 == 1 || x1 == n) && (x2 == 1 || x2 == n) && (y1 == 1 || y1 == n) && (y2 == 1 || y2 == n))
        {
            cout << 2 << endl;
        }

        else
        {
            cout << min((mini(n, x1, y1) + mini(n, x2, y2)), max)<<endl;
        }
    }
    return 0;
}