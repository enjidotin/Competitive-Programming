#include <bits/stdc++.h>
using namespace std;
#define quickio                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
typedef long long ll;

ll sumof(ll num)
{
    return (num * (num + 1)) / 2;
}
void solve()
{
    ll n;
    double descriminant, number;

    cin >> n;
    ll sum = (n * (n + 1)) / 2;
    ll finalANS = 0;
    if (sum & 1)
        finalANS = 0;
    else
    {
        double sumby2 = sum / 2;

        double deter = (sqrt(8 * sumby2 + 1) / 2) - 0.5;
        descriminant = modf(deter, &number);
        ll ans = (ll)deter; //typecasting
        if (descriminant == 0)
            finalANS = sumof(ans - 1) + sumof(n - ans - 1);
        finalANS += n - ans;
    }
    cout << finalANS << "\n";
}
int main()
{
    quickio
        ll times;
    cin >> times;

    while (times--)
    {
        solve();
    }
}