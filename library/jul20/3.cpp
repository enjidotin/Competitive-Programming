#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int t, a, b, c, d, i;
    cin >> t;
    while (t--)
    {
        b = 65 - 1;
        cin >> a;
        if (a == 0)
        {
            for (i = 1; i <= b; i++)
            {
                cout << "X";
                if (i % 8 == 0)
                {
                    cout << '\n';
                }
            }
        }
        if (a > 0)
        {
            cout << 'O';
            a--;
            b--;
            while (a--)
            {
                b--;
                cout << ".";
                if (b % 8 == 0)
                {
                    cout << '\n';
                }
            }
            while (b-- && b >= 0)
            {
                cout << "X";
                if (b % 8 == 0)
                {
                    cout << '\n';
                }
            }
        }
        cout << "\n";
    }
}