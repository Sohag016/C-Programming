#include <stdio.h>
int main()
{
  char str[100]=" w3resource.com", rev[100];
  int i, j, count = 0;
   while (str[count] != '\0')
  {
    count++;
  }
  j = count - 1;
   for (i = 0; i < count; i++)
  {
    rev[i] = str[j];
    j--;
  }
  printf("%s ", rev);
}
