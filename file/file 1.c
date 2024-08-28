#include<stdio.h>
int main()
{
    FILE *file;
    file=fopen("test .text","w");
    if(file==NULL)
    {
        printf("file desn't exist");
    }
    else
    {
        printf("file is opened\n");
        fclose(file);
    }
    getch ();
}
