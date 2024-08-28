#include<stdio.h>
int main()
{
    char str1[20];
    int i,len;
    int flag=0;
    printf("Enter any string:");
    scanf("%s",&str1);
    len=strlen(str1);
    for(i=0;i<len;i++)
    {
        if(str1[i]!=str1)//[len-i-1])
            {
                flag=1;
                break;

            }
    }
    if(flag)
    {
        printf("%s is not palindrome",str1);
    }
    else
        printf("%s is palindrome",str1);

}
