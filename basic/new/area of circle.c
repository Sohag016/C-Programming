#include <stdio.h>
int main()
{
    int flag=1;
    while(flag==1)
    {
  printf("1.addition\n2.subtraction\n3.multipliction\n4.devision\n5.Exit\n");
  printf("Enter any choice ");
  int choice;
  scanf("%d",&choice);

 switch(choice)
 {
 case 1:
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
 case 2:
    {
        int num1,num2;
        printf("enter two num:");
        scanf("%d %d",&num1,&num2);
        int sub=num1-num2;
        printf("subtraction=>%d\n",sub);
        break;
    }
case 3:
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
case 4:
    {
        double num1,num2;
        printf("enter two num:");
        scanf("%lf %lf",&num1,&num2);
        double dev= num1 / num2;
        printf("devision=>%lf\n",dev);
        break;
    }
case 5:
    {
        flag++;
        break;
    }

default:
        printf("invalid insert:");
 }
}


}
