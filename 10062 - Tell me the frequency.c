#include<stdio.h>
#include<string.h>
int main()
{
    char str[1010],ch;
    int stri[130],i,j,ln=0;
    for(i=0;i<=130;i++)
        stri[i]=0;
    while(gets(str))
    {
        if(ln)
            printf("\n");
        for(i=0;i<strlen(str);i++)
        {
            j=str[i];
            stri[j]++;
        }
        for(i=1;i<=strlen(str);i++)
        {
            for(j=127;j>=32;j--)
                if(stri[j]==i)
                    printf("%d %d\n",j,i);
        }
        ln=1;
        for(i=0;i<=130;i++)
            stri[i]=0;
        str[0]='\0';
    }
    return 0;
}
