#include<stdio.h>
struct player
{
     char name[20];
     int runs;
};
int main()
{
     int i,s=0;
     struct player a[11];
     printf("Enter Name of Player Runs Scored \n");
     for(i=0;i<=10;i++)
     {
          scanf("%s",a[i].name);
          scanf("%d",&a[i].runs);
          printf("\t");
     }
     for(i=0;i<=10;i++)
          s=s+a[i].runs;
     printf("Total Runs Scored by Team: %d",s);
     return 0;
}
