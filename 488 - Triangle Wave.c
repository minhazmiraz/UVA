#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    printf("\n");
    l=1;
    while(l<=t)
    {
        scanf("%d%d",&n,&m);
        printf("\n");
        for(k=1;k<=m;k++)
        {
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=i;j++)
                    printf("%d",i);
                printf("\n");
            }
            for(i=n-1;i>0;i--)
            {
                for(j=n-1;j>=(n-i);j--)
                    printf("%d",i);
                printf("\n");
            }

            if(l==t&&k==m)
                continue;
            printf("\n");
        }
        l++;
    }
    return 0;
}
