#include <bits/stdc++.h>
using namespace std;
#define cflush cout.flush();
#define rev(vec) reverse(vec.begin(), vec.end());

int task()
{

    long long int t, answer, a, to;
    answer = 0;
    cin >> t;
    vector<long long int> total;
    for (long long int i = 0; i <= 20; i++)
    {
        cout << i << " " << (1ul << i) << endl;
        cflush;
        cin >> a;
        total.push_back(a);
    }
    rev(total);
    to = total[0] - t * (1ul << 20);
    for (long long int i = 1; i < total.size(); i++)
    {
        if (total[i] >= to)
            total[i] = ((t - (total[i] - to) / (1ul << (total.size() - i))) / 2);
    }
    for (long long int i = 1; i < total.size(); i++)
    {
        if (total[i] % 2 != 0)
            answer += 1ul << (total.size() - 1);
        if (to % 2 != 0)
            answer++;
        cout << 2 << " " << answer << endl;
        cflush;
        long long int result;
        cin >> result;
        return result;
    }
}
void solve()
{
}
int main()
{
    long long int times;
    cin >> times;
    while (times--)
    {
        if (!task())
        {
            break;
        }
        cout << endl;
        cflush;
    }
}