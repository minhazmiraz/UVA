#include<stdio.h>
int main()
{
    char str;
    int count=0,wcount=0;
    while(scanf("%c",&str)==1)
    {
        if(str<65&&count>0||str>90&&str<97&&count>0)
        {
                wcount++;
                count=0;
        }
        else if(str>=65&&str<=90)
            count++;
        else if(str>=97&&str<=122)
            count++;

        if(str=='\n')
        {
            printf("%d\n",wcount);
            wcount=0;
        }
    }
    return 0;
}
