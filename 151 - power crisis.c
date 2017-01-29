#include<stdio.h>

int power(int n,int j)
{
    int i,k,l,test[110],count,diff;
    for(k=1;k<=n;k++)
        test[k]=k;

    for(i=1;n>1;)
    {
        count=0;
        for(;i<=n;i+=j)
        {
            test[i]=0;
            count++;
        }
        n-=count;
        diff=1;
        for(l=1;l<=n;)
            if(test[l]==0)
            {
                for(;l<=n;l++)
                {
                    if(test[l+diff]==0)
                        diff++;
                    test[l]=test[l+diff];
                }
            }
            else
                l++;
        i=(i-(n+count));
    }


    return test[1];
}

int main()
{
    int n,m,ans,k;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        for(m=1;;m++)
        {
            if(n==13)
            {
                ans=1; break;
            }
            k=power(n,m);
            if(k==13)
            {
                ans=m; break;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
