#include<stdio.h>
int main()
{
    int num;
    printf( "enter num:");
    scanf("%d",&num);

    if(num>0)
        printf("positive");
    else  if(num<0)
        printf("negitive");
    else
        printf("zero");

}
