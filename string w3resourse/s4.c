//4. Write a program in C to print individual characters of string in reverse order.
#include <stdio.h>
int main()
{
  char str[100], rev[100];
  int i, j, count = 0;
  scanf("%s",&str);
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
  printf("%s  ", rev);
}
