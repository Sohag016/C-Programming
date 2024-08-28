#include<stdio.h>
int n;
main()
{
    label:

    scanf("%x",&n);
    printf("%d\n",n);

    goto label;
}
