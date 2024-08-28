#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    if(num>0)
        printf("Positive number");
    else if(num<0)
        printf("Negitive number");
    else
        printf("Zero");

}
