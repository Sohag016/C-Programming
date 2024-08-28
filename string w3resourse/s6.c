6. Write a program in C to compare two strings using string library functions.
#include<stdio.h>
int main()
 {
   char str1[30], str2[30];
   int i;
   printf("\nEnter two strings :");
   gets(str1);
   gets(str2);
   int c= strcmp(str1,str2);
   if(c==0)
   printf("strings are same");
   else
   printf("strings are not same");

    return 0;
}

