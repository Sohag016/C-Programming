#include <stdio.h>
int main()
{
    int num1,num2,num3;

    printf("enter number:");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1>num2 && num1>num3)
        printf("large num=%d\n",num1);

     else if(num2>num1 && num2>num3)
        printf("large num=%d\n",num2);

     else if(num3>num1 && num3>num1)
        printf("large num=%d\n",num3);
      else
            printf("number are equal:");
}
