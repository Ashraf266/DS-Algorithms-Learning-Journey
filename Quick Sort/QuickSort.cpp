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

void QuickSort(vector<int> &arr, int s, int e)
{

	if( e-s+1 <= 1)
	{
		return;
	}

	int pivot = arr[e];
	int index = s;

	for(int i=s; i<e; i++)
	{
		if (arr[i] < pivot)
		{
			int tmp = arr[index];
			arr[index] = arr[i];
			arr[i] = tmp;
			index++;
		}
	}

	arr[e] = arr[index];
	arr[index] = pivot;

	QuickSort(arr, s, index-1);
	QuickSort(arr, index+1, e);





}




int main(void)
{

	vector<int> arr = {6, 2, 4, 1, 3};

	printArr(arr);

	QuickSort(arr, 0, arr.size()-1);

	printArr(arr);


	arr = {6, 2, 4, 8, 64, 12, 48, 36, 99, 121, 1, 3};

	printArr(arr);

	QuickSort(arr, 0, arr.size()-1);

	printArr(arr);

	return 0;
}
