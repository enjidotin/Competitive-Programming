#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec;
    long long int t, n,input;

    cin >> t;
    while (t--)
    {
        cin >> n;
        while (n--){
        cin>>input;
        vec.push_back(input);
        }
        sort(vec.begin(), vec.end());
        vec.erase(unique(vec.begin(), vec.end()), vec.end());
            if (vec[0] == 0)
                vec.erase(vec.begin());
        cout << vec.size()<< "\n";
        vec.clear();

    }
}
