#include<stdio.h>
int main()
{
    int arr[1010],n,ptr,temp,count,i;
    while(scanf("%d",&n)==1)
    {
        count=0;
        for(i=1;i<=n;i++)
            scanf("%d",&arr[i]);
        for(i=1;i<n;i++)
            for(ptr=1;ptr<=(n-i);ptr++)
                if(arr[ptr]>arr[ptr+1])
                {
                    temp=arr[ptr];
                    arr[ptr]=arr[ptr+1];
                    arr[ptr+1]=temp;
                    count++;
                }
        printf("Minimum exchange operations : %d\n",count);
    }
    return 0;
}
