//write a program in c to square of any number using the function.
#include<stdio.h>
double square(double num)
{
    return (num*num);
}
int main()
{
    int num;
    double n;
    scanf("%d",&num);
    n=square(num);
    printf("square=%.2f\n",n);
    return 0;
}
