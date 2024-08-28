
#include<stdio.h>
int main()
{
    int a,b, c;
    printf("Enter any value:");
    scanf("%d%d%d",&a,&b,&c);
    int  x=sqrt(b*b-4*a*c)/2*a;
    printf("x=>%d",x);
    return 0;
}
