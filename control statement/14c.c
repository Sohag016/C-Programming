#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter any number:");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2)
    {
        if(num1>num3)
            printf("The number is %d",num1);
        else
            printf("The number is %d",num3);
    }
    else if(num2>num3)
    {
        if(num2>num1)
            printf("The number is %d",num2);
        else
            printf("The number is %d",num1);
    }
    else if(num3>num1)
    {
        if(num3>num2)
            printf("The number is %d",num3);
        else
            printf("The number is %d",num2);
    }
    else
        printf("Number are equle");
}
