#include<stdio.h>
// return type, perameterized
void add(int* a,int* b)
{
    *a=10;
}

int main()
{
    int a=5,b=6;
    add(&a,&b);
    printf("a->%d b->%d",a,b);
}


