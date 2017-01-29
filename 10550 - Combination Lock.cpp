#include<stdio.h>
int main()
{
    int result,pos,first,sfirst,second,tsecond,third;
    while(1)
    {
        scanf("%d%d%d%d",&pos,&first,&second,&third);
        if(first==0&&second==0&&third==0)
            break;
        if(first<pos)
            sfirst=40-((40-pos)+first);
        else if(first==pos)
            sfirst=0;
        else
            sfirst=40-(first-pos);

        if(third<second)
            third=40-((40-second)+third);
        else if(third==second)
            third=0;
        else
            third=40-(third-second);

        if(second>first)
            tsecond=40-((40-second)+first);
        else if(second==first)
            tsecond=0;
        else
            tsecond=40-(first-second);

        result=360+360+(sfirst*9)+360+(tsecond*9)+(third*9);
        printf("%d\n",result);
    }
    return 0;
}
