#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, T, a, b, ans;
    cin >> T;
    while (T--)
    {
        cin >> n;
        cin >> a;
        n--;
        ans = 0;
        while (n--)
        {
            cin >> b;
            ans += abs(a - b) - 1;
            a = b;
        }
        cout << ans << "\n";
    }
}