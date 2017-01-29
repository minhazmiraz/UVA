#include<stdio.h>
int main()
{
    long long n,x;
    int i;
    while(1)
    {
        scanf("%lld",&n);
        x=1;
        if(n<0)
            break;
        else if(n==0)
        {
            printf("%lld\n",x);
            continue;
        }
        for(i=1;i<=n;i++)
            x=(i*2)+(x-i);
        printf("%lld\n",x);
    }
    return 0;
}
