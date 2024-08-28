#include<stdio.h>
int main()
{
    double  r,h,volume;
    printf("Enter  any value:");
    scanf("%lf%lf",&r,&h);
    volume=((3.1416)*pow(r,4)*h)/6;
    printf("volume=%lf",volume);
    return 0;
}
