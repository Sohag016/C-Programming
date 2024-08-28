#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter any number:");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
        printf("%d",num1);
    else if(num1<num2)
        printf("%d",num2);
    else
        printf("equal");
}
