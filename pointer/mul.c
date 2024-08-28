#include<stdio.h>
int main()
{
    int x,y,mul;
    printf("enter any value:");
    scanf("%d%d",&x,&y);
    int *ptr1,*ptr2;
    ptr1=&x;
    ptr2=&y;
    mul=*ptr1**ptr2;
    printf("multiplication=%d",mul);
}


