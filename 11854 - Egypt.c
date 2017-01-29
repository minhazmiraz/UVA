#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    while(1)
    {
        scanf("%d%d%d",&a,&b,&c);
        d=a*a;
        e=b*b;
        f=c*c;
        if(a==0&&b==0&&c==0)
            break;
            else if((d+e)==f)
                printf("right\n");
                else if((e+f)==d)
                    printf("right\n");
                    else if((d+f)==e)
                        printf("right\n");
        else
            printf("wrong\n");
    }
    return 0;
}
