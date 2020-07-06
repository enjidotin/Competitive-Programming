#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t,c,f,g;
    vector<int> a;
    vector<int> b;
    cin>>t;
    while(t--)
    {
        cin>>c;
        for(int i=0;i<c;i++)
            {
                cin>>f;
                a.push_back(f);
            }
            if(a.size()>2){
        while(a.size()>2)
            {
                b.push_back(a[0]);
                b.push_back(a[1]);
                b.push_back(a[2]);
                sort(b.begin(),b.end());
                g=b[1];

                for(int i=0;i<3;i++)
                {
                    if(a[i]==g)
                    a.erase(a.begin()+i);
                }
            }
            }
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    }

}
