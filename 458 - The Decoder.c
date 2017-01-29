#include<stdio.h>
int main()
{
    char str;
    while(scanf("%c",&str)==1)
    {
        if(str=='\n')
            printf("\n");
        else
            printf("%c",str-7);
    }
    return 0;
}
