#include<stdio.h>
int main()
{
    long long step,mode,result,count;
    while(scanf("%lld %lld",&step,&mode)==2)
    {
        result=0;count=0;
        while(1)
        {
            result=(result+step)%mode;
            if(result==0)
                break;
            count++;
        }
        if(count==(mode-1))
            printf("%10lld%10lld    Good Choice\n",step,mode);
        else
            printf("%10lld%10lld    Bad Choice\n",step,mode);
        printf("\n");
    }
    return 0;
}
