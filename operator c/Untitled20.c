#include<stdio.h>
int main()
{
    int b,p;
    printf("Enter base value:");
    scanf("%d",&b);
    printf("Enter power value:");
    scanf("%d",&p);
    double result=pow(b,p);
    printf("%lf",result);
    return 0;
}
