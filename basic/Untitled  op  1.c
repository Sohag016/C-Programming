#include<stdio.h>
main()
{
    while(1)
    {


    printf("1.addition:\n 2.subtraction:\n 3.multiplication:\n 4.devision:\n");
    printf("enter any choice:\n");
    int choice;
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        {
            int n;
            printf("how many number do you want for addition:");
            scanf("%d",&n);

            int a[n],i;
            int sum=0;
            for(i=0;i<=n;i++);
            {
                printf("enter %d no number:",i+1);
                sanf("%d",&a[i]);
                sum+=a[i];
            }
            printf("sum=>%d\n",sum);
            break;
        }
    case 2:
        {
            int num1,num2;
            printf("enter two number:");
            scanf("%d &d",&num1,&num2);
            int sub=num1-num2;
            printf("subtraction=>%d",sub);
            break;
        }
        case 3:
        {
            int n;
            printf("how many number do you want for multiplication:");
            scanf("%d",&n);

            int a[n],i;
            double mul=1;
            for(i=0;i<=n;i++);
            {
                printf("enter %d no number:",i+1);
                sanf("%d",&a[i]);
                mul*=a[i];
            }
            printf("multiplication=>%.2lf\n",mul);
            break;
        }
        case 4:
        {
            int num1,num2;
            printf("enter two number:");
            scanf("%d &d",&num1,&num2);
            float dev=num1/num2;
            printf("subtraction=>%f",dev);
            break;
        }
        default:
            {
                printf("invalid insert!\n");
            }



    }
    }
    gatch();


}
