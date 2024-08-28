#include<stdio.h>
int main()
{
    printf("enter any choice:\n");
    printf("1.fahrenheit to celsius:\n");
    printf("2.celsius to fahrenheit:\n");
    int choice;
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        {
            float f;
            printf("fahrenheit  temprature:>\n");
            scanf(" fahrenheit=%f",&f);

            float c=(f-32)*5/9;
            printf("celsius=%.2f\n",c);
            break;
        }
    case 2:
        {
            float c,f;
            printf("celsius temprature:");
            scanf("%f",&c);
            f=9/5*c+32;
            printf("fahrenheit=%f",f);
            break;
        }
    default:
        {
            printf("ivalid insart\n");
        }
    }
}
