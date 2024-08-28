#include<stdio.h>
struct employee
{
     int e;
     char name[20];
     char dept[20];
     int sal;
};
int main()
{
     struct employee a;
     printf("Enter Employee Details:\n");
     printf("Enter Employee-Id : ");
     scanf("%d",&a.e);
     printf("Enter Name        : ");
     scanf("%s",a.name);
     printf("Enter Department  : ");
     scanf("%s",a.dept);
     printf("Enter Salary      : ");
     scanf("%d",&a.sal);
     printf("\nEmployee Details: ");
     printf("Employee-Id : %d\n",a.e);
     printf("Name        : %s\n",a.name);
     printf("Department  : %s\n",a.dept);
     printf("Salary      : %d\n",a.sal);
     return 0;
}
