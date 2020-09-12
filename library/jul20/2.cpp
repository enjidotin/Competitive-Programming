#include <iostream>
using namespace std;
int Sum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}
int main()
{
    long long int t, a, b, c, d, cw, mw, cc, mc;
    cin >> t;
    while (t--)
    {
        cin >> a;
        mw = 0;
        cw = 0;
        while (a--)
        {
            cin >> c >> d;
            cc = Sum(c);
            mc = Sum(d);
            if (cc > mc)
            {
                cw++;
            }
            if (cc < mc)
            {
                mw++;
            }
            if (cc == mc)
            {
                cw++;
                mw++;
            }
        }
        if (mw > cw)
        {
            cout << "1 " << mw;
        }

        if (mw < cw)
        {
            cout << "0 " << cw;
        }
        if (mw == cw)
        {
            cout << "2 " << mw;
        }
        cout << "\n";
    }

    return 0;
}