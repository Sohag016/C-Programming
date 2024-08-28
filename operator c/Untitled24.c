#include<stdio.h>
int main()
{
    int a,b,c,d,x;
    printf("Enter  any value:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    x=a*b+c*(d*d);
    printf("x=%d",x);
    return 0;
}
