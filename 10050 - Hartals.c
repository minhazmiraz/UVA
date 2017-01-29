#include<stdio.h>

int main()
{
    int arr[100][3650],h[100],party,day,n,p,count,t,i,j;

    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        scanf("%d",&p);

        for(j=1; j<=p; j++)
            scanf("%d",&h[j]);

        count=0;

        for(day=0; day<=n; day++)
        {
            for(party=1; party<=p; party++)
                {
                    if(day%h[party]==0)
                    {
                        if(day%7==0 || (day+1)%7==0)
                            continue;
                        else
                        {
                            count++;
                            break;
                        }
                    }
                }
        }

        printf("%d\n",count);

    }

    return 0;
}
