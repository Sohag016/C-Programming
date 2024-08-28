//10. Write a program in C to find maximum occurring character in a string.
#include <stdio.h>
int main()
{
  	char str[100], result;
  	int i, len,max = -1;
  	int freq[256] = {0};
    printf("\n Please Enter any String :  ");
  	gets(str);
    len = strlen(str);
    for(i = 0; i < len; i++)
  	{
  		freq[str[i]]++;
	}
    for(i = 0; i < len; i++)
  	{
		if(max < freq[str[i]])
		{
			max = freq[str[i]];
			result = str[i];
		}
	}
	printf("The Maximum Occurring Character = %c", result);
   return 0;
}
