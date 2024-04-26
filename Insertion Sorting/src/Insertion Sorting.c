/*
 ============================================================================
 Name        : Insertion.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


void insertionSort(int *arr, int size)
{
	int i,j,tmp;
	for(i=1;i<size;i++)
	{
		j=i-1;
		/* for descending order change the condition to arr[j+1] > arr[j] */
		while(j>=0 && arr[j+1] < arr[j])
		{
			tmp = arr[j+1];
			arr[j+1] = arr[j];
			arr[j] = tmp;
			j--;
		}
	}
}

void printArr(int *arr, int size)
{
	int i=0;
	for(;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int main(void) {

	int arr[] = {2,3,4,1,6};
	int size = sizeof(arr) / sizeof(arr[0]);
	printArr(arr, size);
	insertionSort(arr, size);
	printArr(arr, size);

	int arr1[] = {2,3,1,1,6,3,9,0,8};
	size = sizeof(arr1) / sizeof(arr1[0]);
	printArr(arr1, size);
	insertionSort(arr1, size);
	printArr(arr1, size);


	return EXIT_SUCCESS;
}
