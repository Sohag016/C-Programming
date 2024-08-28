#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{

    char i[20];
    textcolor('GREEN');
    printf("Enter name in capital latter:");
    scanf("%s",&i);
    for(int j=1;j<=20;j++)
    {
        cpintf("HAPPY BIRTHDAY %s \2 \n",i);
        delay(200);

    }
    getch();
}
