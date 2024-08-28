#include<stdio.h>
void swapping  (int *ptr1,int *ptr2)
{
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
int main()
{
    int x=10,y=20;
   printf("x=%d\n",x);
   printf("y=%d\n",y);
   swapping(&x,&y);
     printf("x=%d\n",x);
     printf("y=%d\n",y);
}
