#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter any number:");
    scanf("%d",&n);
    int sum=0,a[100];
    for(i=1;i<=n;i++)
    {
        printf("num=%d:", i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("summation=%d",sum);
    return 0;
}
