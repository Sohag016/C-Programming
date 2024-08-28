#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter fahrenheit temprature:");
    scanf("%f",&f);
    c=5*(f-32)/9;
    printf("celsius=>%f",c);
    return 0;
}

