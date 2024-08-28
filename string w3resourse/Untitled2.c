#include <stdio.h>
int main()
{
    char str1[100];
    char str2[100];
    int i;
    printf("Enter any string: ");
    gets(str1);
   for(i=0; str1[i]!='\0'; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    printf("First string = %s\n", str1);
    printf("Second string = %s\n", str2);
    printf("Total characters copied = %d\n", i);
   return 0;
}
