#include<stdio.h>
int main()
{
    printf("Enter your choice : \n");
    printf("1.Celsius to fahrenheit \n2.Farenheit to Celsius \n");
    int choice;
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        {
            double c,f;
        printf("Enter your Celsius Temperature: ");
        scanf("%lf",&c);

        f= (c*9/5)+32;

        printf("Farenheit Value => %.2lf\n",f);
        break;
        }
    case 2:
        {
            double c,f;
        printf("Enter your Fahrenheit Temperature: ");
        scanf("%lf",&f);
        c =(f-32)*5/9;

        printf("Celsius Value= %.2lf",c);
        break;
        }
    default:
        {
            printf("Insert Input!!");
        }
    }

    getch ();

}
