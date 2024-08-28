 #include<stdio.h>
int main()
{
    int a;
    printf("How many number do you want to print: ");
    scanf("%d",&a);

    for(int i=0;i<=a;i++)
    {
        int flag=0;
        int n=i;
        for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag++;
            break;
        }
    }
    if(n==0 || n==1)
    {
        flag++;
    }
    if(flag==0)
    printf("%d ",n);
    }
}
