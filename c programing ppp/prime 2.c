#include<stdio.h>
int main()
{
    int i,j,a,n;
    printf("Enter any number:\n");
    scanf("%d",&a);
    for(j=2;j<=a;j++)
    {
        int flag=0;
          n=j;

         for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag++;
            break;
        }
    }

if(flag==0)
        printf("%d ",n);

    }
}
