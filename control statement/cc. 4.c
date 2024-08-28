#include<stdio.h>
int main ()
{
    char ch;
    printf("Enter any latter:");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        printf("Small letter");
    }
        else if(ch>='A' && ch<='Z')
    {
         printf("capital latter");
    }
    else
        printf("not latter");
}
