#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int power(int base, unsigned int exp)
{
    int x = 1;
    int i;
    int power = base % MOD;

    for (i = 0; i < sizeof(int) * 8; i++) {
        int least_sig_bit = 0x00000001 & (exp >> i);
        if (least_sig_bit)
            x = (x * power) % MOD;
        power = (power * power) % MOD;
    }

    return x;
}


int main()
{
    unsigned long long i,j,k,n,t;

    cin>>t;
    while(t--){
        k=1;

        cin>>n;
        j=n;
        cout<<power(2,5);
        for(i=1;i<=n;i++)
        {
            k=k*power(i,j);
            j--;

        }
        cout<<k<<"\n";
    }

}
