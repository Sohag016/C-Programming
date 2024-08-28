#include<stdio.h>
int main()
{
    int a[3][3],i,j, uppersum=0,lowersum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
     }
    printf("\nEntered matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i<j)
               uppersum=uppersum +a[i][j];
               if(i>j)
                lowersum=lowersum+a[i][j];
        }
    }
    printf("\nsum of upper elements=%d\n",uppersum);
    printf("\nsum of lower elements=%d\n",lowersum);
}

