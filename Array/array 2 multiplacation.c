
#include<stdio.h>
int main()
{
     int a[100][50],b[100][50],  outm[100][50],i,j,k;
     for(i=0;i<2;i++)
     {
         for(j=0;j<2;j++)
         {
             scanf("%d",&a[i][j]);

         }

     }

     for(i=0;i<2;i++)
     {
         for(j=0;j<2;j++)
         {
             scanf("%d",&b[i][j]);
         }

     }


     for(i=0;i<2;i++)
     {
         for(j=0;j<2;j++)
         {
            outm[i][j]=0;
             for(k=0;k<2;k++)
             {
                 outm[i][j]+=a[i][k]*b[k][j];
             }
         }
     }
    for(i=0;i<2;i++)
     {
        for(j=0;j<2;j++)
         {
             printf("%d ",outm[i][j]);
         }
    printf("\n");
     }
}
