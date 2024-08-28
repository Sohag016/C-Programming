#include<stdio.h>
main()
{
    char a[100],b[100];
    gets(a);
    gets(b);
    int i,j,k;
    j=strlen (a);
    for(k=j,i=0;b[i]!='\0';i++,k++)
    {
        a[k]=b[i];
    }
    a[k]='\0';
   printf("%s",a);

}
