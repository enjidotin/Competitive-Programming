#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, a[5], s[5], i, maxi, mini;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 0; i < n; i++)
        s[i] = 1;

    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((j > i && a[j] < a[i]) || (j < i && a[j] > a[i]))
                s[i]++;
        }
    }
    maxi = s[0];
    for (i = 0; i < n; i++)
    {
        if (maxi < s[i])
            maxi = s[i];
    }
    mini = 1;
    for (i = 0; i < n; i++)
    {
        if (mini > s[i])
            mini = s[i];
    }
    std::cout << mini << " " << maxi << std::endl;
    for (i = 0; i < n; i++)
        cout << s[i];
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
