#include<stdio.h>
int main()
{
    int i,k,subSet[20];
    while(1)
    {
        scanf("%d",&k);
        if(k==0)
            break;
        for(i=1;i<=k;i++)
            scanf("%d",&subSet[k]);
        for(i=1;i<=(k-6+1);i++)
        {
            printf("%d ",subSet[k]);

        }
    }
    return 0;
}
