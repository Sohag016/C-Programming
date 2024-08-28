#include<stdio.h>
int main()
{
    int a[100],n;
    printf("Enter any value:");
    scanf("%d",&n);
    printf("Enter array:");
    for( int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int value,pos=0,i;
    printf("Enter any value:");
    scanf("%d",&value);
    for(i=0;i<n;i++)
    {
        if(value==a[i])
        {
            pos=i+1;
            break;
        }
    }
        if(pos<0)
           printf("it is not found");
        else
        printf("the value is found at %d position",pos);
}
