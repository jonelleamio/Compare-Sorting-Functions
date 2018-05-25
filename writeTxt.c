#include <stdio.h>
#include <stdlib.h>

/**
 *	erase all inside a txt file
 *
 *	char *file :: file to empty
 *
 *	return void
**/
void emptyTxt(char *file)
{
	FILE *f = fopen(file, "w");
	if (f == NULL)
	{
		printf("Error opening file!\n");
		exit(1);
	}

	fprintf(f, " ");
}

/**
 *	Append a number to file
 *
 *	char *file :: filename
 *	double numb :: number to put into a file
 *
 *	return void
**/
void writeToTxt(char *file, double numb)
{
	FILE *f = fopen(file, "a");
	if (f == NULL)
	{
		printf("Error opening file!\n");
		exit(1);
	}

	fprintf(f, "%f\n", numb);

	fclose(f);
}