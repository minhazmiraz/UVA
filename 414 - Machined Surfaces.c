#include<stdio.h>
#include<string.h>

int countSpace(char* x)
{
    int i,count=0,n;
    n=strlen(x);
    for(i=0;i<n;i++)
        if(x[i]==' ')
            count++;
    return count;
}

int main()
{
    int i,j,n,arr[20],result,min;
    char str[20][30],c;
    while(1)
    {
        scanf("%d",&n);
        c=getchar();
        if(n==0)
            break;

        result=0;

        for(i=0;i<n;i++)
        {
            for(j=0;j<25;j++)
                scanf("%c",&str[i][j]);
            c=getchar();
            str[i][25]='\0';
        }


        min=countSpace(str[0]);
        for(i=0;i<n;i++)
        {
            arr[i]=countSpace(str[i]);
            if(min>arr[i])
                min=arr[i];
        }


        for(i=0;i<n;i++)
            result+=arr[i]-min;


        printf("%d\n",result);
    }
    return 0;
}
