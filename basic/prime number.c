#include<stdio.h>
int main()
{
    int n;
    int flag=0;
    printf("Enter a number for check: ");
    scanf("%d",&n);

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("Its not a prime number\n");
            flag++;
            break;
        }
    }
    if(n==0 || n==1)
    {
        printf("Its not a prime number\n");
        flag++;
    }
    if(flag==0)
    printf("Its a prime number");

}
