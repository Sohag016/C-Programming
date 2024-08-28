#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter any value:");
    scanf("%d%d",&num1,&num2);
    int sum=num1+num2;
    float avg=sum/2;
    printf("sum=>%d\n",sum);
    printf("avg=>%f",avg);
    return 0;
}
