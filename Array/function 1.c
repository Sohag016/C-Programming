#include<stdio.h>
int main()
{
    int n,i,a[6];
    scanf("%d",&n);
    if(n%2==0)n++;
    for(i=0;i<6;i++)
    {
       if(a[i]%2==0)
        printf("%d\n",n);
        n+=2;
    }
}
