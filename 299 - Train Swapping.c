#include<stdio.h>
int main()
{
    int t,l,i,j,k,arr[60],temp,count;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&l);
        for(j=1;j<=l;j++)
            scanf("%d",&arr[j]);
        count=0;
        for(j=1;j<l;j++)
        {
            for(k=1;k<=(l-j);k++)
            {
                if(arr[k]>arr[k+1])
                {
                    temp=arr[k+1];
                    arr[k+1]=arr[k];
                    arr[k]=temp;
                    count++;
                }

            }
        }

        printf("Optimal train swapping takes %d swaps.\n",count);
    }
    return 0;
}
