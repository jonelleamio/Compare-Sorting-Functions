#include <stdio.h>
#include <stdlib.h>

/**
 *	Merges two subarrays of array[].
 *	First subarray is array[low..mid]
 *	Second subarray is array[mid+1..high]
 *
 *	int array[] :: array to sort
 *	int low :: lowest index of array  : usually 0
 *	int mid :: middle / mediane index of array
 *	int high :: highest index of array : usually size of array
**/
void merge(int array[], int low, int mid, int high)
{
    int i, j, k;
    int n1 = mid - low + 1;
    int n2 =  high - mid;
 
    // create temp arrays
	int *left = malloc(n1 * sizeof(int));
	int *right = malloc(n2 * sizeof(int));
 
    // Copy data to temp arrays left[] and right[]
    for (i = 0; i < n1; i++)
        left[i] = array[low + i];
    for (j = 0; j < n2; j++)
        right[j] = array[mid + 1+ j];
 
    // Merge the temp arrays back into array[low..high]
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = low; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            array[k] = left[i];
            i++;
        }
        else
        {
            array[k] = right[j];
            j++;
        }
        k++;
    }
 
    // Copy the remaining elements of left[], if there are any
    while (i < n1)
    {
        array[k] = left[i];
        i++;
        k++;
    }
 
    // Copy the remaining elements of right[], if there are any
    while (j < n2)
    {
        array[k] = right[j];
        j++;
        k++;
    }
	free(left);
	free(right);
}
 
/**
 *	low is for left index and high is right index of the
 *	sub-array of array to be sorted
 *
 *	int array[] :: array to sort
 *	int low :: lowest index of array  : usually 0
 *	int high :: highest index of array : usually size of array
 **/
void mergeSort(int array[], int low, int high)
{
    if (low < high)
    {
        // Same as (low+high)/2, but avoids overflow for
        // large low and high
        int mid = low+(high-low)/2;
 
        // Sort first and second halves
        mergeSort(array, low, mid);
        mergeSort(array, mid+1, high);
 
        merge(array, low, mid, high);
    }
}