#include<stdio.h>
int main()
{
    int h,m;
    double ha,ma;
    double ang;
    char c;
    while(1)
    {
        scanf("%d%c%d",&h,&c,&m);
        if(h==0&&m==0)
            break;
        ha=(h*30)+(m*0.5);
        ma=m*6;
        ang=fabs(ha-ma);
        if(ang>180)
            ang=360-ang;
        printf("%0.3lf\n",ang);
    }
    return 0;
}
