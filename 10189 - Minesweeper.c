#include<stdio.h>

char a[10010][10010];
int m,n;

char genco(int x,int y)
{
    int count,i,j;
    count=0;
    for(i=x-1;i<=x+1;i++)
        for(j=y-1;j<=y+1;j++)
        {
            if(i<0||j<0||i>=m||j>=n)
              continue;
            else if(i==x&&j==y)
                continue;
            else
            {
                if(a[i][j]=='*')
                    count++;
            }
        }
    return (count+48);
}

int main()
{
    int i,j,fcount=0;
    while(1)
    {
        scanf("%d%d",&m,&n);
        if(m==0&&n==0)
            break;
        fcount++;
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                scanf(" %c",&a[i][j]);

        if(fcount!=1)
            printf("\n");

        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
            {
                if(a[i][j]=='*')
                    continue;
                else
                    a[i][j]=genco(i,j);
            }
        printf("Field #%d:\n",fcount);
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
              printf("%c",a[i][j]);
            printf("\n");
        }
    }
    return 0;
}
