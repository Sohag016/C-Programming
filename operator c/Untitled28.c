#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two value:");
    scanf("%d%d",&a,&b);
    int x=(a+b)*(a+b)-(a-b)*(a-b);
    printf("x=%d\n",x);
    return 0;
}
