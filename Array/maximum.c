//write a program maximum number use  of array.
#include<stdio.h>
int main()
{
    int num[100],n,i;
    printf("Enter number=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);

    }
    int max = num[0];
    for(i=1;i<n;i++)
    {
        if(max<num[i])
        max=num[i];
    }
    printf("max=%d",max);
}
