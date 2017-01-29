#include<stdio.h>

int pro(int temp)
{
    int result=0;
    while(temp!=0)
    {
        result+=(temp%10)*(temp%10);
        temp=temp/10;
    }
    return result;
}

int main()
{
    int T_case,i,n,temp;
    scanf("%d",&T_case);
    for(i=1;i<=T_case;i++)
    {
        scanf("%d",&n);
        temp=n;
        while(1)
        {
            temp=pro(temp);
            if(temp==4||temp==1)
                break;
        }
        if(temp==1)
            printf("Case #%d: %d is a Happy number.\n",i,n);
        else
            printf("Case #%d: %d is an Unhappy number.\n",i,n);
    }
    return 0;
}
