#include<stdio.h>
#include<math.h>
int main()
{
  int i,j=1;
  double a,s,t,u,v;
  while(1)
  {
    scanf("%d",&i);
    if(i==1)
    {
      scanf("%lf%lf%lf",&u,&v,&t);
      s=((u+v)/2.0)*t;
      a=(v-u)/t;
      printf("Case %d: %0.3lf %0.3lf\n",j,s,a);
    }
      else if(i==2)
      {
        scanf("%lf%lf%lf",&u,&v,&a);
        t=(v-u)/a;
        s=((u+v)/2.0)*t;
        printf("Case %d: %0.3lf %0.3lf\n",j,s,t);
      }
        else if(i==3)
        {
          scanf("%lf%lf%lf",&u,&a,&s);
          v=sqrt(pow(u,2)+(2.0*a*s));
          t=(v-u)/a;
          printf("Case %d: %0.3lf %0.3lf\n",j,v,t);
        }
          else if(i==4)
          {
            scanf("%lf%lf%lf",&v,&a,&s);
            u=sqrt(pow(v,2)-(2.0*a*s));
            t=(v-u)/a;
            printf("Case %d: %0.3lf %0.3lf\n",j,u,t);
          }
    else
      break;
    j++;
  }
  return 0;
}
