#include<stdio.h>
void main()
{
    //variables
    int lowercase;
    char uppercase;

    printf("\n");

    //enter lower case ascii number
    printf("Enter  lower case:\t");
    scanf("%d",&lowercase);

    //transform lower to upper
    uppercase=lowercase-32;

    //print upper case
    printf("\nEnter uppercase:\t %c\n",uppercase);

    //end
}
