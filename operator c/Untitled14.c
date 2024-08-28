#include<stdio.h>
int main()
{
    double a,b,c;
    printf("Enter any value:");
    scanf("%lf%lf%lf",&a,&b,&c);
    double s=a+b+c/2;
    double area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area=>%lf",area);
    return 0;
}
