#include<stdio.h>
int main()
{
    char lowercase;

    printf("Enter lower case letter :");
    scanf("%c",&lowercase);

    printf("The uppercase letter :%c",lowercase-32);
    return 0;
}
