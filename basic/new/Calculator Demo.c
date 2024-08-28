#include <stdio.h>
int main()
{
    while(1)
    {
  printf("Enter any choice(+,-,*,/): ");
  //printf("Enter any choice ");
  char choice;
  scanf("%c",&choice);

 switch(choice)
 {
 case '+':
     {
         int n;
         printf("how many  number do you want  number");
         scanf("%d",&n);

         int a[n],i;
         int sum=0;
         for(i=0;i<n;i++)
         {
             printf("enter  %d no number",i+1);
             scanf("%d",&a[i]);
             sum+=a[i];

         }
         printf("sum=>%d",sum);
         break;

     }
 case '-':
    {
        int num1,num2;
        printf("enter two num:");
        scanf("%d %d",&num1,&num2);
        int sub=num1-num2;
        printf("subtraction=>%d\n",sub);
        break;
    }
case '*':
     {
         int n;
         printf("how many  number do you want  number");
         scanf("%d",&n);

         int a[n],i;
         int mul=1;
         for(i=0;i<n;i++)
         {
             printf("enter %d no number",i+1);
             scanf("%d",&a[i]);
             mul*=a[i];

         }
         printf("mul=>%d",mul);
         break;

     }
case '/':
    {
        double num1,num2;
        printf("enter two num:");
        scanf("%lf %lf",&num1,&num2);
        double dev= num1 / num2;
        printf("devision=>%lf\n",dev);
        break;
    }

default:
    {
         printf("invalid insert!!\n");
    }
}

}}

