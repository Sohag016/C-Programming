#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=10;i++)
    {
        printf("%d*%d=> %d\n",n,i,i*n);
    }
}
/*
1*6=6
2*6=12
3*6=18
*/
