//5. Write a program in C to count the total number of words in a string.
#include <stdio.h>
int main()
{
    char s[100];
    int i,words=0;
    printf("Enter  the string : ");
    gets(s);
    for(i=0;s[i];i++)
    {
    	if(s[i]==32)
    	 words++;
     }
 	if(i>0)
 	 words++;
   printf("no of words in string = %d\n",words);
   return 0;
}
