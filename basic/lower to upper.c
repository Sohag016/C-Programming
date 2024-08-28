//conversion from lowercase to uppercase using library function.
#include <stdio.h>
int main()
{
    char lower ,upper;

    printf("Enter lowercase letter:");
    scanf("%c",&lower);

    upper=toupper(lower);
    printf("uppercase letter:%c",upper);


}
