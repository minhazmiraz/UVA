#include<stdio.h>
int main()
{
  int h1,m1,h2,m2;
  int i,time;
  while(1)
  {
    scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
    if(h1==0&&m1==0&&h2==0&&m2==0)
      break;
    if(h1<h2)
      time=((h2*60)+m2)-((h1*60)+m1);
          else if(h1>h2)
            time=(1440-((h1*60)+m1))+((h2*60)+m2);
              else if(h1==h2)
              {
                if(m1>m2)
                  time=(1440-((h1*60)+m1))+((h2*60)+m2);
                    else if(m1<m2)
                      time=m2-m1;
                else
                    time=0;
              }
    printf("%d\n",time);
  }
  return 0;
}
