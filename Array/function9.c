#include<stdio.h>
void calculatedsum(int x[ ],int p)
{
    int sum=0,i;
    for(i=0;i<p;i++)
    {
        sum+=x[i];
    }
    printf("summation=%d",sum);
}
int main()
{
    int a[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    calculatedsum(a,n);
}
