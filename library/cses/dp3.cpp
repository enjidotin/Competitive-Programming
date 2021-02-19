#include <bits/stdc++.h>
using namespace std;

int edibleSlice(int n, int m, vector<vector<int>> matrix, int coil_starting, int coil_direction)
{
}
void spiralPrint(int m, int n, vector<vector<int>> a[R][C])
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

int main()
{
    int n, m, coil_starting, coil_direction;
    cin >> n >> m >> coil_starting >> coil_direction;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int result = edibleSlice(n, m, matrix, coil_starting, coil_direction);
    cout << result << "\n";
}
