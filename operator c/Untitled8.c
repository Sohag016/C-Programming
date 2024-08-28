#include<stdio.h>
int main()
{
    double width, length;
    printf("Enter any value:");
    scanf("%lf%lf",&width,&length);
    double area=width *length;
    printf(" Rectangle area=>%lf",area);
    return 0;
}
