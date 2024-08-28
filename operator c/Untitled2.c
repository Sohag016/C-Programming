#include<stdio.h>
int main()
{
    int a,b,x;
    printf("Enter frist value:");
    scanf("%d",&a);
    printf("Enter second value:");
    scanf("%d",&b);
    x=a*a-2*a*b+b*b;
    printf("x=>%d",x);
    return 0;
}
