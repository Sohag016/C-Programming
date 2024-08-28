#include<stdio.h>
int main()
{
    char a[30];
    char b[30];
    gets (a);
    gets(b);
    int d=strcmp(a,b);
    if(d==0)
    {
        printf("same");
    }
    else
        printf("not sme");
}
