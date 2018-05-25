#include <stdio.h>
#include <stdlib.h>


/**
 *
 *	Sort the array by quick sort
 *
 *	int array[] :: array to sort
 *	int start :: starting value : 0
 *	int end :: last value : array size
 *
 *	return void
 *
**/
void quickSort(int array[], int start, int end)
{
	int left = start - 1;
	int right = end + 1;
	const int pivot = array[start]; //pivot is the first element in array

	/* If the array is not longer than 1, then the array is sorted. */
	if (start >= end){ return; }
		
	/* Sort array from right to left and from left to right
	at the same time and finish when they crosses. */
	while (1)
	{
		do right--; while (array[right] > pivot);
		do left++; while (array[left] < pivot);

		if (left < right)
			swap(array, left, right);
		else break;
	}
	/* every element lower to pivot are at its left and the others are on the right
	there are now two children array that we will sort recursivly */
	quickSort(array, start, right);
	quickSort(array, right + 1, end);
}

