#include<stdio.h>
main()
{
    printf("1.enter fahrenheit to celsius:\n");
    printf("2.enter celsius to fahrenheit:\n");
    printf ("enter any choice:\n");
    int choice;
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        {
            double f,c;
            printf("enter to fahrenheit temprature:");
            scanf("%lf",&f);
            c=(f-32)*5/9;
            printf("celsius:%lf\n",c);
            break;
        }
    case 2:
        {
             double f,c;
            printf("enter to celsius temprature:");
            scanf("%lf",&c);
            f=9/5*c+32;
            printf("fahrenheit:%lf\n",f);
            break;
        }
    default:
        {
        printf("invalid temprature");
        }
    }
    return 0;
}
