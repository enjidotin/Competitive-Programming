#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define for0(i, n) for (int i = 0; i < n; i++)
#define loop(i, a, b) for (int i = a; i < b; i++)
#define bloop(i, a, b) for (int i = a; i >= b; i--)
#define ll long long
#define pb emplace_back
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define in(x) scanf("%d", &x)
#define rr return 0
#define vi vector<int>
#define endl "\n"
#define pi pair<int, int>
#define vii vector<pi>

set<int> s;
stack<double> st;

void infect(int i, vector<pair<int, double>> *arr)
{
    s.insert(i);
    double s2 = st.top();

    for (auto iterator = arr[i].begin(); iterator != arr[i].end(); iterator++)
    {

        int v1 = iterator->first;
        double s1 = iterator->second;

        if (s.find(v1) != s.end())
            continue;

        if (s1 >= s2)
        {
            st.push(s1);
            s.insert(v1);
            infect(v1, arr);
        }
    }
    st.pop();
}

signed main()
{
    fio;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v;
        vector<pair<int, double>> arr[n];

        double z, x;

        for0(i, n)
        {
            cin >> z;
            v.push_back(z);
        }

        for (double i = 0; i < n; i++)
        {

            for (double j = 0; j < n; j++)
            {

                if (i == j)
                    continue;

                if (v[j] == v[i])
                    continue;

                x = (i - j) / (v[j] - v[i]);

                if (x > 0)
                    arr[int(i)].push_back(make_pair(int(j), x));
            }
        }

        vector<int> ansVect;

        for0(i, n)
        {

            st.push(0);

            infect(i, arr);

            ansVect.push_back(s.size());
            s.clear();
        }

        sort(ansVect.begin(), ansVect.end());

        cout << ansVect.front() << " " << ansVect.back() << endl;
    }

    rr;
}