#include<stdio.h>
int main()
{
    int n,i,v,x,l,c;
    int j;
    while(1)
    {
        i=0;v=0;x=0;l=0;c=0;
        scanf("%d",&n);
        if(n==0)
            break;
        if(n%10!=4&&n%10!=9)
        {
            if(n<5)
                i=n;
            else if(n>=5&&n<10)
            {
                v=n/5;
                i=n-5;
            }
            else if(n>=10&&n<40)
            {
                x=n/10;
                v=(n-(x*10))/5;
                i=(n-(x*10)-(v*5));
            }
            else if(n>=50&&n<90)
            {
                l=n/50;
                x=(n-(l*50))/10;
                v=(n-(l*50)-(x*10))/5;
                i=(n-(l*50)-(x*10)-(v*5));
            }
        }
        else if(n%10==4||n%10==9)
        {
            switch(n+1)
            {
            case 5:
                i=1;
                v=1;
                break;
            case 10:
                i=1;
                x=1;
                break;
            case 50:

                break;
            case 100:
                break;
            default:
                break;
            }
        }

        printf("%d: %d i, %d v, %d x, %d l, %d c",n,i,v,x,l,c);
    }
    return 0;
}
