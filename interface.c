#include <stdio.h>
#include <stdlib.h>

/**
 *	Function to print an array
 *	
 *	int array[] :: array to be print
 *	int size :: size of the array
 *
 *	return void
**/
void printArray(int array[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", array[i]);
	printf("\n");
}
/**
 *	Function to show code progression
 *
**/
void operationProcess(int size, int sizeMax)
{
	printf("Veuillez patiente : %d%% termine\n", (size * 100) / sizeMax);
}