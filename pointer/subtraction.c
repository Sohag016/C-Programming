#include<stdio.h>
int main()
{
    int x,y,sub;
    printf("enter any value:");
    scanf("%d%d",&x,&y);
    int *ptr1,*ptr2;
    ptr1=&x;
    ptr2=&y;
    sub=*ptr1-*ptr2;
    printf("subtraction=%d",sub);
}

