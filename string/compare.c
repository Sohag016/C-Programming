#include<stdio.h>
int main()
{
    char s1[]="sohag";
    char s2[]="sohag";
    int d=strcmp(s1,s2);
    if(d==0)
    {
        printf("strings are equal");

    }
    else
        printf("strings are not equal");
}
