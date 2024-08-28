#include<stdio.h>
int main()
{
    int n,i,a[100],result=1;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
        result*=a[i];
    }
    printf("multiplacation=%d",result);
}
