#include<stdio.h>
int main()
{
    int num1;
    printf("Enter num:");
    scanf ("%d",&num1);
    if (num1>0)
        printf("positive");
    else if(num1<0)
          printf("negitive");
    else
        printf("zero");


}
