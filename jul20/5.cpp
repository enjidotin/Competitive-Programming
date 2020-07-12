#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, a, b, d, e, f, i = 0;
    vector<long long int> c;
    while (t--)
    {
        cin >> a;
        cin >> b;
        while (a--)
        {
            cin >> c[i];
            i++;
        }
        cout << *min_element(c.begin(), c.end());
    }
}