#include<stdio.h>
int main()
{
    int flag=0;
    while(flag==0)
    {
    int choice;
    printf("Enter your choice \n1.Summation\n2.Subtraction\n3.Multiplication\n4.Devision\n5.Exit\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        {
            int n;
            printf("How many number do you want for addition: ");
            scanf("%d",&n);

            int a[n];
            int sum=0;
            for(int i=0;i<n;i++)
            {
               printf("Enter %d No number: ",i+1);
               scanf("%d",&a[i]);
               sum+=a[i]; //sum= sum+a[i];
            }
            printf("sum => %d\n",sum);
            break;
        }
    case 2:
        {
            int num1,num2;
            printf("Enter 1st & 2nd numbers: ");
            scanf("%d %d",&num1,&num2);
            int sub=num1-num2;
            printf("Subtraction of two number is: %d\n",sub);
            break;
        }
    case 3:
        {
            int n;
            printf("How many number do you want for multiplication: ");
            scanf("%d",&n);

            int a[n];
            double mul=1;
            for(int i=0;i<n;i++)
            {
               printf("Enter %d No number: ",i+1);
               scanf("%d",&a[i]);
               mul*=a[i]; //mul= mul*a[i];
            }
            printf("Multiplication => %.0lf\n",mul);
            break;
        }
    case 4:
        {
            int num1,num2;
            printf("Enter 1st & 2nd numbers: ");
            scanf("%d %d",&num1,&num2);
            double dev=num1/num2;
            printf("%d/%d => %.2lf\n",num1,num2,dev);
            break;
        }
    case 5:
        {
           flag++;
           break;
        }
    default:
        {
            printf("Invalid Insert!!\n");
        }
    }
    }

    getch();
}
