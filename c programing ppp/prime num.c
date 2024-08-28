#include<stdio.h>
int main()
{
    int n,i,flag;
    printf("Enter any positive number: ");
    scanf("%d",&n);
    flag=1;
     for(i=2;i<n;i++)

         if(n%i==0)
          flag=0 ;
         if(flag==1)

            printf("prime num");



     else
        printf("not prime");
}
