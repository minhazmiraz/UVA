#include<stdio.h>
int main()
{
  int a,b,c;
  int n,i;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    scanf("%d%d%d",&a,&b,&c);
    int med;
    med=a;
    if(med>b&&med>c)
    {
      if(b>c)
        med=b;
      else
        med=c;
    }
      else if(med<b&&med<c)
      {
        if(b<c)
          med=b;
        else
          med=c;
      }

    printf("Case %d: %d\n",i,med);
  }
  return 0;
}
