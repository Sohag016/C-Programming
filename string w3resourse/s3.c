//3. Write a program in C to separate the individual characters from a string.
#include<stdio.h>
int main()
{
    char a[]="w3resource.com";
    for(int i=0;i<strlen(a);i++)
    printf("%c ",a[i]);
}
