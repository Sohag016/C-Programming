#include<stdio.h>
int main()
{
    float c,f;

    printf("temperature centigrade:");
    scanf("%f",&c);

    f=(c*9/5)+32;

    printf ("F=%f\n",f);
    return 0;
}
