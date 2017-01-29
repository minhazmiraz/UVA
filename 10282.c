#include<stdio.h>
int main()
{
    char eng[10010][20],forn[10010][20],i,ch;
    while(1)
    {
        for(i=0;i<10;i++)
        {
            scanf(" %s",eng[i]);
            scanf(" %s",forn[i]);

            printf("%s",eng[i]);
            printf("%s",forn[i]);
        }
    }
    return 0;
}
