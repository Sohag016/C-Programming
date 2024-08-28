#include<stdio.h>
int main()
{
    char s[100000];
    scanf("%s",s);
    int a=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a')
            a=i+1;
    }

    if(a>0)
        printf("%d",a);
    else
        printf("-1");
}
