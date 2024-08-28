#include<stdio.h>
int main()
{
    int num1,num2,num3,sum;
    float avg;

    printf("Enter three number:");
    scanf("%d%d%d",&num1,&num2,&num3);

    sum=num1+num2+num3;
    avg=sum/3;

    //print =sum and avg.

    printf("sum=%d\n,avg=%f\n",sum,avg);
    return 0;
}
