#include<stdio.h>
int main()
{
    int row,col,i,j,a[100][50],even=0,odd=0;
    printf("Enter any value: ");

    scanf("%d",&row);
    scanf("%d",&col);

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {

           printf("a[%d]",i,j);

            scanf("%d",&a[i][j]);
            if(a[i][j]%2==0)
                even++;
            else
                odd++;
        }
    }
    printf("Even=%d\n",even);
    printf("Odd=%d\n",odd);
}
