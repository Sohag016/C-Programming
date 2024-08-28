 //2.Write a program in C to find the length of a string without using library function.
#include<stdio.h>
int main()
{
   char str1[50];
    int i, l = 0;
    printf("Input a string : ");
    scanf("%s",&str1);
    for (i = 0; str1[i] != '\0'; i++)
    {
        l++;
    }
    printf("Length of the string %s is: %d\n\n", str1,l);
}
