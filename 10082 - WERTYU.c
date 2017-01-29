#include<stdio.h>
int main()
{
    char str[10000],key[]={'`','1','2','3','4','5','6','7','8','9','0','-','=','Q','W','E','R','T','Y','U','I','O','P','[',']','\\','A','S','D','F','G','H','J','K','L',';','\'','Z','X','C','V','B','N','M',',','.','/'};
    int i,j,k=0;
    while(gets(str))
    {
        for(i=0;str[i]!='\0';i++)
            for(j=0;;j++)
                if(str[i]==' '||str[i]=='\n')
                    break;
                else if(str[i]==key[j])
                {
                    str[i]=key[j-1];
                    break;
                }
        printf("%s\n",str);
    }
    return 0;
}
