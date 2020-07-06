#include <stdio.h>

int main()
{
    long long t,n,a[100000],i,y,j;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        for(j=0;j<n;j++)
        {
            y=0;
            for(i=0;i<n;i++)
            {
                if(a[j]<a[i])
                    y++;
            }
            printf("%lld ",y);
        }
        printf("\n");
    }
    return 0;

}
