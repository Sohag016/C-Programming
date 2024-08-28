#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m=sum(n);
    //scanf("%d",&sum);
    printf("summation=>%d",m);
}
int sum (int p)
{
    if(p==0)
        return 0;

    else
        return p+sum(p-1);
}

