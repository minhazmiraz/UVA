#include<stdio.h>
int main()
{
    int n,i,sum,arr[100],avg,counter=0;
    scanf("%d",&n);
    while(n)
    {
        sum=0;
        counter++;
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            sum+=arr[i];
        }
        avg=sum/n;
        sum=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]>avg)
                sum+=(arr[i]-avg);
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",counter,sum);
        scanf("%d",&n);
    }
    return 0;
}
