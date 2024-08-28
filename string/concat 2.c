#include<stdio.h>
int main()
{
    char s1[]="my name is";
    char s2[]="md sohsg";
    int i=0,len=0,j=0;
    while (s1[i]!='\n')
    {
        i++;
        len++;
    }
    while(s2[j]!='\0');
    {
         s1[len+j]=s2[j];
        j++;

    }
    printf("s1=%s\n",s1);
    printf("s2=%s\n",s2);
}
