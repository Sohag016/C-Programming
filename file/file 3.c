#include<stdio.h>
int main()
{
    FILE *file;
    char name[20] ;

    file=fopen("test .text","w");
    if(file==NULL)
    {
        printf("file doesn't exist");
    }
    else
    {
        printf("file is opened\n");
        printf("Enter your full name:");
        gets(name);
        fputs(file ,name);
        printf("file is writen successfully");
        fclose(file);
    }
    getch ();
}


