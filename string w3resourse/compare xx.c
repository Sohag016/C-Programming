#include<stdio.h>
main()
{
    char a[100],b[100];
    gets(a);
    gets(b);
    int i,j=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=b[i])
        {
        j=1;
        break;
        }
    }
    if(j>0)
    {
        printf("not same");

    }
    else
        printf("same");
}
