//write a program that can area of triangle.
#include<stdio.h>
int main()
{
    float base ,height ,area;

    printf("enter base:");
    scanf("%f",&base);

    printf("enter height:");
    scanf("%f",&height);

    area=0.5*base*height;

    printf("area=%f\n",area);
    return 0;
}
