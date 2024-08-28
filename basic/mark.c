#include<stdio.h>
int main()
{
    float mark;
    printf ("Enter mark:");
    scanf("%f",&mark);

    if (mark>=80)
        printf("A+");

    else if(mark>=70)
        printf("A");

    else if(mark>=60)
        printf("A-");

    else if (mark>=33)
        printf("D");

    else
        printf("fail");

}
