#include<stdio.h>
int main()
{
    int choice;
    printf("enter any choice");
    scanf("%d",&choice);
    printf("1.fahrenheit to celsius temprature:\n");
    printf("2.celsius to fahrenheit temprature:\n");

    if(choice==1)
    {
        float c,f;
        printf("Enter  fahrenheit temprature:\n ");
        scanf("%f",&f);
        c=5*(f-32)/9;
        printf("celsius=>%f",c);
    }
    else if(choice==2)
    {

        float c,f;
        printf("Enter celsius temprature:\n ");
        scanf("%f",&c);
        f=9/5*c+32;
        printf("celsius=>%f",f);

    }
    else
        {
            printf("Invalid insert\n");
        }
}
