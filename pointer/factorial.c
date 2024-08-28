#include <stdio.h>
void valueFact( int ,int*);
int main()
{
        int fact;
         int num1;
         printf(" Input a number : ");
         scanf("%d",&num1);
         valueFact(num1,&fact);
         printf(" The Factorial is %d no : %d \n\n",num1,fact);
         return 0;
        }
void valueFact(int n,int *f)
		{
        int i;

       *f =1;
       for(i=1;i<=n;i++)
       *f=*f*i;
       }

