#include<stdio.h>
struct person
{
    int age;
    float salary;
};
int main()
{
    struct person person1,person2;
    person1 .age=27;
    person1 . salary =12750.50;
    printf("person1 :\n");
    printf("age=%d\n",person1.age);
    printf("salary=%f\n",person1.salary);
    person2 .age=24;
    person2 . salary =15750.50;
    printf("person2 :\n");
    printf("age=%d\n",person2.age);
    printf("salary=%f\n",person2.salary);
    getch();
}

