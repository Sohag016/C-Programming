#include <stdio.h>
//#include <stdlib.h>
 main()
{
	FILE *fptr;
	char fname[20];
	char str;
    printf(" Input the filename to be opened : ");
	scanf("%s",fname);
	fptr = fopen (fname, "r");
	if (fptr == NULL)
	{
		printf(" File does not exist or cannot be opened.\n");
		exit(0);
	}
    str = fgetc(fptr);
	while (str != EOF)
		{
			printf ("%c", str);
			str = fgetc(fptr);
		}
	fclose(fptr);
}
