#include<stdio.h>
int logic(int a,int b)
{
    if(a>b) return -1;
    else return 1;
}
void sort(int* A,int n,int (*compare)(int,int))
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
        for(j=0;j<n-1-i;j++)
            if(compare(A[j],A[j+1])>0)
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                printf("%d %d\n",A[j],A[j+1]);
            }
}
int main()
{
    int i,n;
    int A[]={3,5,6,2,9,4,1};
    sort(A,7,logic);
    for(i=0;i<7;i++)
        printf("%d ",A[i]);
    return 0;
}
