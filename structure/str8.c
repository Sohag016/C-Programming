#include<stdio.h>
struct lay
{
    int id;
    int age;
};
int main()
{
    struct lay ob1;
    ob1.id = 16;
    ob1.age = 21;
    printf("ID is %d",ob1.id);
    printf("\nage is %d",ob1.age);
    return 0;
}
