#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define R 3
#define C 6


    void spiralPrint(int m, int n, vector <vector <int>> a[R][C])
    {
        int i, k = 0, l = 0;

        /* k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */

        while (k < m && l < n)
        {
            /* Print the first row from
               the remaining rows */
            for (i = l; i < n; ++i)
            {
                cout << a[k][i] << " ";
            }
            k++;

            /* Print the last column
         from the remaining columns */
            for (i = k; i < m; ++i)
            {
                cout << a[i][n - 1] << " ";
            }
            n--;

            /* Print the last row from
                the remaining rows */
            if (k < m)
            {
                for (i = n - 1; i >= l; --i)
                {
                    cout << a[m - 1][i] << " ";
                }
                m--;
            }

            /* Print the first column from
                   the remaining columns */
            if (l < n)
            {
                for (i = m - 1; i >= k; --i)
                {
                    cout << a[i][l] << " ";
                }
                l++;
            }
        }
    }

    /* Driver Code */
    int main()
    {
        spiralPrint(R, C, a);
        return 0;
    }
