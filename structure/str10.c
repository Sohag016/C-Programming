#include<stdio.h>
struct lay
{
    char name[100];
};
int main()
{
    struct lay obl;
    strcpy(obl.name,"sohag hossain");
    printf("name is %s",obl.name);
    return 0;
}
