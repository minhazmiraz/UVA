#include<stdio.h>
int main()
{
    int a,b,c,d,count=0;
    for(a=2;a<=200;a++)
    {
        for(b=2;b<=a;b++)
        {
            for(c=b;c<=a;c++)
            {
                if((b*b*b)+(c*c*c)>(a*a*a))
                    break;
                for(d=c;d<=a;d++)
                {
                    count++;
                    if((b*b*b)+(c*c*c)+(d*d*d)>(a*a*a))
                        break;
                    if((a*a*a)==(b*b*b)+(c*c*c)+(d*d*d))
                        printf("Cube = %d, Triple = (%d,%d,%d)\n",a,b,c,d);

                }
            }
        }
    }
    printf("%d",count);
    return 0;
}
