#include<stdio.h>

int check_prime(int a)
{
    int i,count=0;
    for(i=1;i<=a;i++){
        if(a%i==0)
            count++;
    }
    if(count==0)
        return 1;
    else
        return 0;
}

int main()
{
    int n,p1,p2,pcount;
    while(1)
    {
        scanf("%d",&n);
        pcount=0;
        if(n==0)
            break;
        for(p1=1;p1<=(n/2);p1++)
        {
            printf("%d\n",check_prime(p1));
            if(check_prime(p1))
            {
                p2=n-p1;
                printf("%d\n",check_prime(p2));
                if(check_prime(p2))
                    pcount++;
            }
        }
        printf("%d\n",pcount);
    }
    return 0;
}
