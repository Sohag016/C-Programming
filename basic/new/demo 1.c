#include<stdio.h>
int main()
{
    int n;
    printf("How many number do you want to print: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)//n=70
    {
        if(i%3==0)

        printf("%d ",i);
    }
}
