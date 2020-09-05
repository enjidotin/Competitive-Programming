#include <bits/stdc++.h>
using namespace std;
long long int vec[64][64];
void swaparr(int n)
{
    long long temp;
    for(int i=n-1;i>=0;i--)
    {
        temp=vec[0][i];
        vec[0][i]=vec[i][0];
        vec[i][0]=temp;
    }
}




int main()
{
    long long int t, n, input,temp;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> vec[i][j];
            }
        }
        int ctr=0;
        for(int i=n-1;i>=0;i--)
        {
            if(vec[0][i]!=i+1)
                {
                    for(int j=i-1;j>=0;j--)
                    {
                        temp=vec[0][j];
                        vec[0][j]=vec[j][0];
                        vec[j][0]=temp;
                    }
                    ctr++;

                }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << vec[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<ctr;




    }
}
