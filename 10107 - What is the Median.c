#include<stdio.h>
int main()
{
    long long arr[10010],n,temp,result;
    arr[0]=-1;
    int k=1,ptr;
    while(scanf("%ld",&n)==1)
    {
        temp=n;
        ptr=k-1;
        while(temp<arr[ptr])
        {
            arr[ptr+1]=arr[ptr];
            ptr--;
        }
        arr[ptr+1]=temp;

        if(k%2==0)
        {
            result=k/2;
            result=(arr[result]+arr[result+1])/2;
            printf("%ld\n",result);
        }
        else
        {
            result=k/2;
            printf("%ld\n",arr[result+1]);
        }

        k++;
    }
    return 0;
}
