#include<stdio.h>
int main()
{
    double   a,b,c,d,value;
    printf("Enter  a b c d:");
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    value=sqrt(sqrt(a*b+c*pow(d,5)));
    printf("value=%lf",value);
    return 0;
}
