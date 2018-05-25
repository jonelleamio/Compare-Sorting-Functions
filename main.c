#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/types.h>

int main()
{
	int runTest = 0;
	printf("Desirez vous lancer la procedure de test ? 1 = lancer le test / 0 = continuer\n");
	scanf("%d", &runTest);
	if (runTest == 1)
	{
		// Test procedure calling every sort drivers
		TestSortFunctions();
		printf("Procedure de test : success !");
		getchar();
		exit(0);
	}

	//empty all txt file before writing
	emptyTxt("ArrSize.txt");
	emptyTxt("ExecTimeQuick.txt");
	emptyTxt("ExecTimeBubble.txt");
	emptyTxt("ExecTimeSelection.txt");
	emptyTxt("ExecTimeMerge.txt");
	
	int size; // starting array size to sort
	int sizeMax; // maximum array size to sort

	printf("\n\nVeuillez saisir la taille initiale du tableau a trier : \n");
	scanf("%d", &size);
	printf("Veuillez saisir la taille maximum du tableau a trier : \n");
	scanf("%d", &sizeMax);

	int step = size;

	// initialize arrays
	int *arrQuickSort = malloc(sizeMax * sizeof(int));
	int *arrBubbleSort = malloc(sizeMax * sizeof(int));
	int *arrTriSelection = malloc(sizeMax * sizeof(int));
	int *arrMergeSort = malloc(sizeMax * sizeof(int));

	for (; size <= sizeMax; size = size + step)
	{
		writeToTxt("ArrSize.txt", (double)size); // save array size into txt file

		genArr(arrQuickSort, arrBubbleSort, arrTriSelection, arrMergeSort, size); // fill arrays with generated random numbers

		clock_t start, end;

		start = clock();
		quickSort(arrQuickSort, 0, size); // sort array by quick sort
		end = clock();
		writeToTxt("ExecTimeQuick.txt", (double)(end - start) / CLOCKS_PER_SEC);
		
		start = clock();
		bubbleSort(arrBubbleSort, size); // sort array by bubble sort
		end = clock();
		writeToTxt("ExecTimeBubble.txt", (double)(end - start) / CLOCKS_PER_SEC);

		start = clock();
		TriSelection(arrTriSelection, size); // sort array by selection sort
		end = clock();
		writeToTxt("ExecTimeSelection.txt", (double)(end - start) / CLOCKS_PER_SEC);

		start = clock();
		mergeSort(arrMergeSort, 0, size); // sort array by merge sort
		end = clock();
		writeToTxt("ExecTimeMerge.txt", (double)(end - start) / CLOCKS_PER_SEC);

		operationProcess(size, sizeMax);
	}

	// Free up declared dynamic arrays
	/*for (int i = 0; i < sizeMax; i++)
	{
		free(arrQuickSort[i]);
		free(arrBubbleSort[i]);
		free(arrTriSelection[i]);
		free(arrMergeSort[i]);
	}

	free(arrQuickSort);
	free(arrBubbleSort);
	free(arrTriSelection);
	free(arrMergeSort);

	arrQuickSort = NULL;
	arrBubbleSort = NULL;
	arrTriSelection = NULL;
	arrMergeSort = NULL;*/

	//getchar();
	

	return 0;
}