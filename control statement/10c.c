#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    if(n>0)
    {
    if(n%2==0)
        printf("Even number");
    else
        printf("Odd number");
    }
    else
        {
        printf("invalid insert");
        }
}
