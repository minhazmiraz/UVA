#include<stdio.h>
float c2f(float c)
{
  float b;
  b=(9.0/5.0*c)+32;
  return b;
}
float f2c(float f)
{
  float d;
  d=(f-32)*5.0/9.0;
  return d;
}

int main()
{
  int t,i;
  scanf("%d",&t);
  for(i=1;i<=t;i++)
  {
    float a,c,d;
    scanf("%f%f",&c,&d);
    a=c2f(c);
    a=a+d;
    printf("Case %d: %0.2f\n",i,f2c(a));
  }

  return 0;
}
