#include<stdio.h>
int main()
{
    double base, height;
    printf("Enter any value:");
    scanf("%lf%lf",&base,&height);
    double area=0.5*base *height;
    printf(" Triangle area=>%lf",area);
    return 0;
}


