#include <stdio.h>
#include <stdlib.h>

/**
 *
 *	Driver programs to test all sort functions
 *	
 *	TestQuickSort()
 *	TestBubbleSort()
 *	TestTriSelection()
 *	TestMergeSort()
 *
**/

/**
 *
 *	Driver program to test QuickSort functions
 *
 **/
void TestQuickSort()
{
	int arr[] = { 100, 500, 50, 12, 7, 11, 6, 13, 5 ,3 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	printf("Given array is \n");
	printArray(arr, arr_size);

	quickSort(arr, 0, arr_size - 1);

	printf("\nSorted array is \n");
	printArray(arr, arr_size);

}

/**
*
*	Driver program to test BubbleSort functions
*
**/
void TestBubbleSort()
{
	int arr[] = { 100, 500, 50, 12, 7, 11, 6, 13, 5 ,3 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	printf("Given array is \n");
	printArray(arr, arr_size);

	bubbleSort(arr, arr_size);

	printf("\nSorted array is \n");
	printArray(arr, arr_size);

}

/**
 *
 *	Driver program to test TriSelection functions
 *
**/
void TestTriSelection()
{
	int arr[] = { 100, 500, 50, 12, 7, 11, 6, 13, 5 ,3 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	printf("Given array is \n");
	printArray(arr, arr_size);

	TriSelection(arr, arr_size);

	printf("\nSorted array is \n");
	printArray(arr, arr_size);

}


/**
*
*	Driver program to test MergeSort functions
*
**/
void TestMergeSort()
{
	int array[] = { 100, 500, 50, 12, 7, 11, 6, 13, 5 ,3 };
	int arr_size = sizeof(array) / sizeof(array[0]);

	printf("Given array is \n");
	printArray(array, arr_size);

	mergeSort(array, 0, arr_size - 1);

	printf("\nSorted array is \n");
	printArray(array, arr_size);

}

/** Drivers to test every sort functions **/
void TestSortFunctions()
{
	printf("TestQuickSort\n\n");
	TestQuickSort();

	printf("\n\n\nTestBubbleSort\n\n");
	TestBubbleSort();

	printf("\n\n\nTestTriSelection\n\n");
	TestTriSelection();

	printf("\n\n\nTestMergeSort\n\n");
	TestMergeSort();
}