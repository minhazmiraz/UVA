#include<stdio.h>
#include<math.h>
int main()
{
    int p;
    int n,i;
    while(scanf("%d",&n)==1)
    {
        i=1;
        p=1;
        while(p%n!=0)
        {
            p=(p*10)+1;
            p=p%n;
            i++;
        }
        printf("%d\n",i);
    }
    return 0;
}
