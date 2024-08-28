#include<stdio.h>
 double trianglearea(double b,double h)
{
    return b*h;
}
int main()
{
    double base,height;
    printf("Enter any value:");
    scanf("%lf%lf",&base,&height);
    double area= trianglearea(base,height);
    printf("Triangle area=%.2lf\n",area);
}
