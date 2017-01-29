#include<stdio.h>
int main()
{
    int t,n,i,j;
    char series[20];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int ban=0,www=0,tie=0,abn=0;
        scanf("%d",&n);
        scanf("%s",series);
        for(j=0;j<n;j++)
        {
            if(series[j]=='B')
                ban++;
                else if(series[j]=='W')
                    www++;
                    else if(series[j]=='T')
                        tie++;
                        else if(series[j]=='A')
                            abn++;
        }
        if(ban>www&&www==0&&tie==0)
            printf("Case %d: BANGLAWASH\n",i);
            else if(www>ban&&ban==0&&tie==0)
                printf("Case %d: WHITEWASH\n",i);
                else if(www==ban&&www>0)
                    printf("Case %d: DRAW %d %d\n",i,www,tie);
                    else if(www==ban&&tie>0)
                        printf("Case %d: DRAW %d %d\n",i,www,tie);
                        else if(abn==n)
                            printf("Case %d: ABANDONED\n",i);
                            else if(ban>www&&www>0)
                                printf("Case %d: BANGLADESH %d - %d\n",i,ban,www);
                                else if(ban>www&&www==0)
                                    printf("Case %d: BANGLADESH %d - %d\n",i,ban,www);
                                    else if(www>ban&&ban>0)
                                        printf("Case %d: WWW %d - %d\n",i,www,ban);
                                        else if(www>ban&&ban==0)
                                            printf("Case %d: WWW %d - %d\n",i,www,ban);
    }
    return 0;
}
