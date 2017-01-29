#include<stdio.h>
#include<math.h>
int main()
{
  int i,t,k,l;
  scanf("%d",&t);
  for(i=1;i<=t;i++)
  {
    double tax=0;
    scanf("%d",&k);
    if(k>1180000)
      tax=ceil(((k-1180000)*0.25)+(60000+60000+30000));
      else if(k>880000&&k<=1180000)
        tax=ceil(((k-880000)*0.20)+(60000+30000));
        else if(k>480000&&k<=880000)
          tax=ceil(((k-480000)*0.15)+30000);
            else if(k>180000&&k<=480000)
              tax=ceil((k-180000)*0.10);

    if(tax>0&&tax<2000)
      tax=2000;
    printf("Case %d: %0.0lf\n",i,tax);

  }
  return 0;
}
