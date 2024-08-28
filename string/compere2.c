#include<stdio.h>
int main()
{
      char s1[30]="sohag";
      char s2[30];
      int i=0,len=0,j;
      while(s1[i]!='\n')
      {
          i++;
          len ++;
      }
      for(j=0;j<=0;j++)
      {
          s2[j]=s1[i];
      }
      s2[j]='\0';
      s2[j]='\0';
      printf("s1=%s\n",s2);
      printf("s2=%s\n",s1);
      return 0;

}
