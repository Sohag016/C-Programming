#include<stdio.h>
//void add(int a,int b)
//{
//    printf("%d %d\n",a,b);
//    a=9;
//    b=10;
//    printf("%d %d\n",a,b);
//}

int main()
{
    int ar[5]={1,2,3,4,5};
    int* pa;
    pa=&ar[0];
    printf("%d\n",&ar[0]);
    printf("%d\n",*pa);
//    add(a,b);
//    printf("main->%d",a+b);
}
