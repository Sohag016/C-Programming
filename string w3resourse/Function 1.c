#include<stdio.h>
// non return type, not perameterized
void add()
{
    int a, b;
    scanf("%d %d",&a,&b);
    printf("%d",a+b);
}

int main()
{
    add();
}
