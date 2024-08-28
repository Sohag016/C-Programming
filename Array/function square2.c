#include<stdio.h>
int square(int a)
{
    return a*a;
}
int main()
{
    int num;
    printf("Enter any num:");
    scanf("%d",&num);
    float result=sqrt(num);
   printf("squre is:%.2f\n" ,result);
}

