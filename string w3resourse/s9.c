//9.Write a program in C to count total number of vowel or consonant in a string
#include <stdio.h>
int main()
{
    char s[1000];
    int i,vowels=0,consonants=0;
    printf("Enter  the string : ");
    gets(s);
   for(i=0;s[i];i++)
    {
    	if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122))
    	{
        if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'
           ||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O' ||s[i]=='U')
		      vowels++;
            else
             consonants++;
        }
    }
    printf("vowels = %d\n",vowels);
    printf("consonants = %d\n",consonants);
    return 0;
}
