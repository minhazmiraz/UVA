#include<stdio.h>
int main()
{
    char str;
    int count;
    count=0;
    while(scanf("%c",&str)==1)
    {
        if(str=='"')
        {
            count++;
            if(count%2!=0)
                printf("``");
            if(count%2==0)
                printf("''");
        }
        else
            printf("%c",str);
    }
    return 0;
}
