#include<stdio.h>
int main()
{
    int n,a[100],i,count=0;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    if(a[i]>=50)
        count++;
    }
    printf("large count=%d",count);
}
