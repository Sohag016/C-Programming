#include<stdio.h>
int main()
{
  int x;
  scanf("%d",&x);

    int *ptr1;
    ptr1=&x;
    printf("x=%d",&ptr1);
   ptr1++;

}
