#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    if(n%2==0)
    {
        if(n%3==0)
            printf("The number is even and divisible by 3");
        else
            printf("The number is even but not divisible by 3");
    }
    else
        {
        if(n%3==0)
            printf("The number is odd and divisible by 3");
        else
            printf("the number is odd but not divisible by 3");
        }
}
