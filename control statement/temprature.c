#include<stdio.h>
int main()
{
    printf("1.Enter celsius to fahrenheit:\n");
    printf("2.Enter fahrenheit to celsius:\n");
    printf("Enter any choice:");
    int choice;
    scanf("%d",&choice);
    if(choice==1)
    {
        float c,f;
        printf("Enter celsius temprature:");
        scanf("%f",&c);
        f=c*9/5+32;
        printf("farenheit=%f",f);

    }
    else if(choice==2)
    {
        float f,c;
        printf("Enter fahrenheit temprature:");
        scanf("%f",&f);
        c=5*(f-32)/9;
        printf("celsius=%f",c);
    }
    else
        printf("invalid insert");


}
