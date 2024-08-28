#include<stdio.h>
int main()
{
    int m=fact(5);
    //scanf("%d",&n);
    printf("facttorial %d",m);
}
int fact (int p)
{
    if(p==0)
        return 1;

    else
        return p*fact(p-1);
}
