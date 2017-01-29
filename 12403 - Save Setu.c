#include<stdio.h>
#include<ctype.h>
int main()
{
  char a[10];
  int i,t,k;
  int donation=0;
  scanf("%d",&t);
  for(i=1;i<=t;i++)
  {
    scanf("%s",a);
    if(tolower(a[0])=='d')
      scanf("%d",&k);
    if(tolower(a[0])=='d')
      donation+=k;
    else
      printf("%d\n",donation);
  }
  return 0;
}
