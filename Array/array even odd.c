
#include<stdio.h>
int main()
{
    int n,i,a[100],count1=0,count2=0;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            count1++;
        if(a[i]%2!=0)
            count2++;
    }
    printf("Even=%d\n",count1);
    printf("Odd=%d\n",count2);
}
