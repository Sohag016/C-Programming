#include<stdio.h>
int main()
{
    double base, height;
    printf("Enter any value:");
    scanf("%lf%lf",&base,&height);
    double area=base *height;
    printf(" Parallel area=>%lf",area);
    return 0;
}
