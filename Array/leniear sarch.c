#include<stdio.h>
int main()
{
    int a[100],n;
    printf("Enter any number:");
    scanf("%d",&n);
    int i;
    printf("Enter array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i])
    }
    int pos=0,value;
    printf("enter any value:");
    scanf("%d",&value);
    for(i=0;i<n;i++)
    {
        if(a[i]==value)
            {
              pos=i+1;
              break;
            }
    }
    if(pos<0)
       printf("it is not found:");
    else
        printf("Enter %d no position",pos);

}
