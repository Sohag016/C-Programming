#include<stdio.h>
void calculetedvalue(int arr[ ],int p)
{
    int i,sum=0;
  for(i=0;i<p;i++)
  {
      sum+=arr[i];
  }
  printf("sum=%d\n",sum);
 }
int main()
{
    int n,array[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    calculetedvalue (array,n);
}
