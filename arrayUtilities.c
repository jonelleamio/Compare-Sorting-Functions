#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *	Fill up the arrays with random numbers
 * 
 *	int array[]
 *	int arr_size
 *
 **/
void genArr(int array[], int array2[], int array3[], int array4[], int arr_size)
{
	int i;
	srand(time(NULL));
	for (i = 0; i < arr_size; i++)
	{
		int nb = 0;
		nb = rand() % arr_size;
		array[i] = nb;
		array2[i] = nb;
		array3[i] = nb;
		array4[i] = nb;
	}
}

/**
*   Swap values from array
*
*   int array[] :: array where swap takes place
*   int x :: index of the first value : bigger
*   int y :: index of the second value : smaller
*
*   return void
**/
void swap(int array[], int x, int y)
{
	int tmp; //temporary variable to swap variables value

	tmp = array[x];
	array[x] = array[y];
	array[y] = tmp;
}