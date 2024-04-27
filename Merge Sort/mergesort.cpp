#include <iostream>
#include <vector>
using namespace std;


void printArr(vector<int> &arr)
{
	for(int num: arr)
	{
		cout << num << " ";
	}
	cout << endl;
}

void merge(vector<int> &arr, int start, int mid, int end)
{
	//tmp array sizes
	int n1 = mid+1-start;
	int n2 = end - mid;

	//allocate new array tmp data
	vector<int> arrLeft(n1);
	vector<int> arrRight(n2);

	for(int i=0; i<n1; i++)
	{
		arrLeft[i] = arr[start+i];
	}

	for(int i=0; i<n2; i++)
	{
		arrRight[i] = arr[mid+1+i];
	}

	cout << "LEFT & RIGHT ARRAYS" << endl;
	printArr(arrLeft);
	printArr(arrRight);

	int indexPointer = start;
	int leftPointer = 0;
	int rightPointer = 0;

	while(leftPointer < n1 && rightPointer < n2)
	{
		if(arrLeft[leftPointer] <= arrRight[rightPointer])
		{
			arr[indexPointer] = arrLeft[leftPointer];
			leftPointer++;
		}
		else
		{
			arr[indexPointer] = arrRight[rightPointer];
			rightPointer++;
		}
		indexPointer++;
	}

	while(leftPointer < n1)
	{
		arr[indexPointer] = arrLeft[leftPointer];
		leftPointer++;
		indexPointer++;
	}

	while(rightPointer < n2)
	{
		arr[indexPointer] = arrRight[rightPointer];
		rightPointer++;
		indexPointer++;
	}

	cout << "AFTER SORTING THE TWO HALVES" << endl;
	printArr(arr);
}

void mergeSort(vector<int> &arr, int start, int end)
{
	if(start >= end)
		return;

	int mid = (end+start)/2;

	mergeSort(arr, start, mid);// Sort First Half
	mergeSort(arr, mid+1, end);// Sort Second Half

	merge(arr, start, mid, end);// Merge the Sorted Halves

}





int main(void)
{



	vector<int> arr = {3, 2, 4, 1, 6, 7, 8};
	cout << "Given array is: ";
	printArr(arr);

	mergeSort(arr, 0, arr.size() - 1);

	cout << "Sorted array is: ";
	printArr(arr);



	return 0;
}
