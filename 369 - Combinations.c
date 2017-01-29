#include<stdio.h>

long long fact(int m,int n);
int main()
{
    int m,n;
    while(1)
    {
        scanf("%d%d",&n,&m);
        if(n==0&&m==0)
            break;
        printf("%d things taken %d at a time is %lld exactly.\n",n,m,fact(m,n));
    }
    return 0;
}

long long fact(int m,int n)
{
    int i;
    if((n-m)<m)
        m=n-m;
    long long mul=1;
    for(i=1;i<=m;i++,n--){
        mul=mul*n;
        mul=mul/i;
    }
    return mul;
}
