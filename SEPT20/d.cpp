#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int i, j, n, m;
    cin >> n;
    if (n == 1 || n == 2)
        cout << "0\n";
    else
    {
        if (n == 3)
            cout << "2\n";
        else
        {
            if (n % 2 == 0)
            {
                if ((n / 2) % 2)
                    cout << "0\n";
                else
                {
                    cout << n / 2 << '\n';
                }
            }
            else
            {
                if ((n / 2) % 2)
                    cout << n / 2 << '\n';
                else
                {
                    cout << "0\n";
                }
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
