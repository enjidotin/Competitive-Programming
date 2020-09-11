#include <algorithm>
#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#define mod (int)1000000007
#define MOD (int)1000000007
// Big two primes
#define X 1011001110001111ll
#define M 26388279066623ll
#define all(a) a.begin(), a.end()
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i, a, b) for (int i = a; i < b; i++)
#define bloop(i, a, b) for (int i = a; i >= b; i--)
#define tc(t) \
    int t;    \
    cin >> t; \
    while (t--)
#define int long long
#define ll long long
#define pb emplace_back
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define in(x) scanf("%d", &x)
#define rr return 0
#define prec(n) fixed << setprecision(n)
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int>>
#define inf (int)(1e18)
#define ini(a, i) memset(a, i, sizeof(a))
#define vi vector<int>
#define fi first
#define se second
#define kitna se
#define endl "\n"
#define pi pair<int, int>
#define vii vector<pi>
const int MAXN = (int)((1e5) + 10);
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
// int min(int a,int b){if(a<b) return a; else return b;}
//bool isPrime(int N){ for(int i=2;i*i<=N;++i){if(N%i==0) return false;}return true;}
// int cbrt(int x){ int lo=1,hi=min(2000000ll,x);while(hi-lo>1){int mid=(lo+hi)/2;if(mid*mid*mid<x){lo=mid;}else hi=mid;}if(hi*hi*hi<=x) return hi;else return lo;}
const int dx[4] = {-1, 1, 0, 0};
const int dy[4] = {0, 0, -1, 1};
//const int N =  (int)(250005);
//vector<int>vec[nax];
const int N = 5 * 1e6 + 4;

int swapvalues(float temp, int n, int m)
{
    int i = m + 1 - temp;

    if (i <= 0)
    {
        int j = 1 + temp;
        return n + 1 - j;
    }

    else
    {
        int l1 = temp;
        int l2 = n - m;

        if (l1 < l2)
            return l1;
        else
            return l2;
    }
}

int min(int a, int b)
{
    return (a < b) ? a : b;
}

int binomialCoeff(int n)
{
    int k = 2;

    if (n < k)
        return 0;

    int C[n + 1][k + 1];
    int i, j;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= min(i, k); j++)
        {
            if (j == 0 || j == i)
                C[i][j] = 1;
            else
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }

    return C[n][k];
}

int root(float c)
{
    float discriminant = sqrt(1 - 4 * c);
    int m;

    float x1 = (-1 + discriminant) / (2);
    float x2 = (-1 - discriminant) / (2);

    if (x1 > 0)
        m = ceil(x1);
    else if (x2 > 0)
        m = ceil(x2);

    return m;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif

    fio;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        float c = ((3 * n) - pow(n, 2) - 4) / 2;

        int m = root(c);

        int sumofn = (n * (n + 1)) / 2;

        if (sumofn % 2 != 0)
        {
            cout << n << " " << 0 << endl;
            continue;
        }

        float sumofm = m * (m + 1);
        float temp = (sumofn - sumofm) / 2;

        int ans = 0;

        while (true)
        {

            if (temp == 0)
            {
                // cout<<"hello "<<m<<" "<<temp<<endl;
                ans += binomialCoeff(m) + binomialCoeff(n - m);
            }

            else if (temp < 1)
                break;

            else if (n - 1 >= temp)
            {

                if (temp == roundf(temp))
                {
                    // cout<<"hoho "<<m<<" "<<temp<<endl;
                    ans += swapvalues(temp, n, m);
                }
            }

            m++;
            temp -= m;
        }

        cout << n << " " << ans << endl;
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;

    rr;
}