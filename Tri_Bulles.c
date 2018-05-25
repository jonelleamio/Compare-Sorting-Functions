#include <stdio.h>
#include <stdlib.h>

/**
*   Sort array by bubble sort
*
*   int array[] :: array to sort
*   int len_array :: size of array
*
*   return void
**/
void bubbleSort(int array[], int len_array)
{
	/* condition to stop recursion */
	//if (len_array <= 1){ return; }
		
	int i, j; // counters i for 1st loop and j for 2nd
	int swapped;// loop breaker stand as booleen

	/*
	*	compares each pair of adjacent items and swaps them if they are in the wrong order
	*	search through the list is repeated until no swaps are needed, which indicates that the list is sorted
	*
	*	array gets shorter as last values are sorted
	*/
	for (i = 0; i < len_array - 1; i++)
	{
		swapped = 0; // set swap to false
		for (j = 0; j < len_array - i - 1; j++)// i stands for the total of value sorted
		{
			if (array[j] > array[j + 1])
			{
				swap(array, j, j + 1);
				swapped = 1;// set swap to true
			}
		}

		/* IF no two elements were swapped by inner loop, then break */
		if (swapped == 0)
			break;
	}

	/*	
	 *	Actually not working, infinite recursion that im unable to fix, 
	 *	replaced by for (i = 0; i < len_array - 1; i++)
	 */
	//bubbleSort(array, len_array-1);
}

