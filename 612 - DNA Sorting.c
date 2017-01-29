#include<stdio.h>
#include<string.h>
int main()
{
    int t,x,i,j,k,l,m,n,count,arr[110],ptr,temp;
    char str[60],stri[110][60],temps[60];

    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        l=1;
        arr[0]=-1;
        scanf("%d%d",&n,&m);
        for(x=1;x<=m;x++)
        {
            count=0;
            scanf(" %s",str);
            for(j=0;j<n-1;j++)
            {
                for(k=j+1;k<n;k++)
                    if(str[j]>str[k])
                        count++;
            }
            temp=count;
            strcpy(temps,str);
            ptr=l-1;
            while(temp<arr[ptr])
            {
                arr[ptr+1]=arr[ptr];
                strcpy(stri[ptr+1],stri[ptr]);
                ptr--;
            }
            arr[ptr+1]=temp;
            strcpy(stri[ptr+1],temps);
            l++;
        }

        for(x=1;x<=m;x++)
            printf("%s\n",stri[x]);
        if(i!=t)
            printf("\n");
    }
    return 0;
}
