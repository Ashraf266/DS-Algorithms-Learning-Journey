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
	printArr(arr, 5);
	insertionSort(arr, 5);
	printArr(arr, 5);
	return EXIT_SUCCESS;
}
