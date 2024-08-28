#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter any value:");
    scanf("%d",&n);
    for(i=1;i<=10000000000000000;i++)
    {
        printf("%d+%d=%d\n",n,i,n+i);
    }
}
