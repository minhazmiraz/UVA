#include<stdio.h>

int main()
{
    int n,row,col,mat[110][110],rowsum[110],colsum[110],rowodd,colodd,rowerr,colerr;
    while(1)
    {
        rowodd=0;
        colodd=0;
        scanf("%d",&n);
        if(n==0)
            break;
        for(row=0; row<n; row++)
        {
             for(col=0; col<n; col++)
                scanf("%d",&mat[row][col]);
        }

        for(row=0; row<n; row++)
        {
            rowsum[row]=0;
            for(col=0; col<n; col++)
                rowsum[row]+=mat[row][col];
        }

        for(col=0; col<n; col++)
        {
            colsum[col]=0;
            for(row=0; row<n; row++)
                colsum[col]+=mat[row][col];
        }

        for(row=0; row<n; row++)
        {
            if(rowsum[row]%2!=0)
            {
                rowodd++;
                rowerr=row;
            }
            else
                continue;
        }

        for(col=0; col<n; col++)
        {
            if(colsum[col]%2!=0)
            {
                colodd++;
                colerr=col;
            }
            else
                continue;
        }

        if(rowodd==0&&colodd==0)
            printf("OK\n");
                else if(rowodd==1&&colodd==1)
                    printf("Change bit (%d,%d)\n",rowerr+1,colerr+1);
                    else
                        printf("Corrupt\n");

    }
    return 0;
}
