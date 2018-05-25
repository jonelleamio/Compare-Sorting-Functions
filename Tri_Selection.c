#include <stdio.h>
#include <stdlib.h>

/**
 *   Sort array by selection
 *   
 *
 *   int array[] :: array to be sorted
 *   int len_array :: array size
 *
 *   return void
**/
void TriSelection( int array[], int len_array )
{
	/* condition to stop recursion */
    //if( len_array <= 1 ){ return; }
        
	int i, j, max_index; // declaring counters:: i for 1st loop and j for 2nd

	for (i = 0; i < len_array - 1; i++)
	{
		max_index = 0; // to start lets say 1st value is the highest

		/* find maximum value in unsorted array */
		for (j = 0; j < len_array - i - 1; j++)// i stands for the total of value sorted
		{
			if (array[j] > array[max_index])
			{
				max_index = j;
			}
			swap(array, len_array - 1, max_index); // move highest value at the end of the unsorted array
		}
	}
    
	/*
	 *	array gets smaller as last values are sorted
	 *	recursion not working and replaced by a for loop
	 *	problem encounter :: infinite recursive that i can't fix
	 */
    //TriSelection(array, len_array-1);
}
