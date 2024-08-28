#include<stdio.h>
int main()
{
    FILE *file;
    char name[20] = "sohag";
    int length=strlen(name);
    int i;
    file=fopen("test .text","w");
    if(file==NULL)
    {
        printf("file doesn't exist");
    }
    else
    {
        printf("file is opened\n");
        for(i=0;i<length;i++)
        {
            fputc(name [i],file);
        }
        printf("file is writen successfully");
        fclose(file);
    }
    getch ();
}

