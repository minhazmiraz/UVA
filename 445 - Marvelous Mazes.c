#include<stdio.h>

int main()
{
    int n=0,i;
    char ch;
    while(scanf("%c",&ch)==1)
    {
        if(ch>=48&&ch<=57)
            n+=(ch-48);
        else if(ch=='!'||ch=='\n')
            printf("\n");
        else if(ch=='b')
        {
            for(i=1;i<=n;i++)
                printf(" ");
            n=0;
        }
        else
        {
            for(i=1;i<=n;i++)
                printf("%c",ch);
            n=0;
        }
    }
    return 0;
}
