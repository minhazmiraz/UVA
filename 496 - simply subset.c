#include<stdio.h>
int main()
{
    int i,j,equalA,equalB,uneqA,uneqB,setA[150],setB[150],countA,countB;
    char ch;
    while(scanf("%d",&setA[1])==1)
    {
        ch=getchar();
        countA=1;
        countB=0;
        if(ch!='\n')
        {
            for(i=2;;i++)
            {
                scanf("%d",&setA[i]);
                ch=getchar();
                countA++;
                if(ch=='\n')
                    break;
            }
        }

        for(i=1;;i++)
        {
            scanf("%d",&setB[i]);
            ch=getchar();
            countB++;
            if(ch=='\n')
                break;
        }

        equalA=0;
        equalB=0;
        uneqA=0;
        uneqB=0;
        for(i=1;i<=countA;i++)
        {
            for(j=1;j<=countB;j++)
                if(setA[i]==setB[j])
                {
                    equalA++;
                    break;
                }
            if(j>countB)
                uneqA++;
        }

        for(i=1;i<=countB;i++)
        {
            for(j=1;j<=countA;j++)
                if(setB[i]==setA[j])
                {
                    equalB++;
                    break;
                }
            if(j>countA)
                uneqB++;
        }
        if(uneqA==0 && uneqB==0)
            printf("A equals B\n");
        else if(uneqA==0 && uneqB>0)
            printf("A is a proper subset of B\n");
        else if(uneqB==0 && uneqA>0)
            printf("B is a proper subset of A\n");
        else if(equalA==0 && equalB==0)
            printf("A and B are disjoint\n");
        else if(equalA>0 && equalB>0 && uneqA>0 && uneqB>0)
            printf("I'm confused!\n");
    }
    return 0;
}
