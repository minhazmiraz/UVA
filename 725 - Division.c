#include<stdio.h>
int main()
{
    int tmp,used,abcde,fghij,n,count=0,cnt;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        count++;
		if (count > 1)
			printf("\n");
        cnt=0;
        for(fghij=1234;fghij<=98765/n;fghij++)
        {
            abcde=fghij*n;
            tmp=fghij;
            used=(fghij<10000);
            while(tmp)
            {
                used|=1<<(tmp%10);
                tmp/=10;
            }
            tmp=abcde;
            while(tmp)
            {
                used|=1<<(tmp%10);
                tmp/=10;
            }
            if(used==(1<<10)-1)
            {
                if(fghij<10000)
                    printf("%d / 0%d = %d\n",abcde,fghij,n);
                else
                    printf("%d / %d = %d\n",abcde,fghij,n);
                cnt++;
            }
        }
        if(cnt==0)
            printf("There are no solutions for %d.\n",n);
    }
    return 0;
}
