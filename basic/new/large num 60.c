#include<stdio.h>
int main()
{
    int num1,num2;

    printf("enter any num:");
    scanf("%d%d",&num1,&num2);

    if(num1>num2)
        printf(" big=%d\n",num1);
    else if(num1<num2)
        printf("small=%d\n",num2);
    else
        printf("num is equel:");

}
