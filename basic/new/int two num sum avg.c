//write a program that to takes two integer number and display sum avg.
#include<stdio.h>
int main()
{
    int num1,num2,sum;
    float avg;

    printf("Enter two number=");
    scanf("%d %d",&num1,&num2);

    sum= num1+num2;
    printf("sum=%d",sum);

    avg=(float)sum/2;
    printf ("The avg=%f\n",avg);
    return 0;

}
