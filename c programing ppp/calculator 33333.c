#include<stdio.h>
int main()
{
    label:
    printf("\n1.summation\n2.subtraction\n3.multiplication\n4.devision\n");
    printf("Enter any choice:");
    int choice;
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        {
            int n;
            printf("How any number do you want number: ");
            scanf("%d",&n);

            int a[n],i;
            int sum=0;
            for(i=0;i<n;i++)
                {
                printf("Enter %d no number:",i+1);
            scanf("%d",&a[i]);
            sum+=a[i];
                 }
        printf("summation=>%d",sum);
        break;
        }
    case 2:
        {
        int num1,num2,sub;
        printf("Enter one number:");
        scanf("%d",&num1);
        printf("Enter two number:");
        scanf("%d",&num2);
        sub=num1-num2;
        printf("subtraction=>%d\n",sub);
        break;
        }
        case 3:
        {
            int n;
            printf("How any number do you want number: ");
            scanf("%d",&n);

            int a[n],i;
            int mul=1;
            for(i=0;i<n;i++)
                {
                printf("Enter %d no number",i+1);
            scanf("%d",&a[i]);
            mul*=a[i];


        }
        printf("multiplication=>%d",mul);
        break;
        }
        case 4:
        {
        double num1,num2,dev;

        printf("Enter one number:");
        scanf("%lf",&num1);
        printf("Enter two number:");
        scanf("%lf",&num2);
        dev=num1/num2;
        printf("devision=>%.2lf\n",dev);
        break;
        }
        default:
            {


            printf("not exsist");
            }





    }

    goto label;
    return 0;
}
