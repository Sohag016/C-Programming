#include<stdio.h>
int main()
{
    int a[30],value,i;
    printf("Enter any value:");
    scanf("%d",&value);
    for(i=0;i<value;i++)
         scanf("%d",&a[i]);
     printf("Enter any sarch value: ");
   //scanf("%d",&value);
    for(i=0;i<value;i++)
    {
        if(value==a[i])
        i=i+1;
        break;
    }
    if(value==i)
    {
        printf("not found");
    }
    else
        printf("value is %d number position",value);
}
