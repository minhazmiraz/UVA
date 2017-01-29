#include<stdio.h>
int main()
{
    int n,k,result,x;
    while(scanf("%d%d",&n,&k)==2)
    {
        result=n;
        while(n>=k)
        {
            x=n/k;
            result+=x;
            n=x+(n%k);
        }
        printf("%d\n",result);
    }
    return 0;
}
