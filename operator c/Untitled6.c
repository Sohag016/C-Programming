#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter any value:");
    scanf("%d%d",&num1,&num2);
    double dev=num1/num2;
    double rem=num1%num2;
    printf("devision=>%lf\n",dev);
    printf("rem=>%lf",rem);
    return 0;
}
