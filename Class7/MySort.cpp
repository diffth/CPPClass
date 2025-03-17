#include "MySort.h"

void selectionSort(int* arr, int length)
{
	int i, j;
	int index_min;	//임시 최소값의 인덱스
	int temp;		//임시 최소값

	for (int i = 0; i < length; i++)
	{
		index_min = i;
		for (j = i + 1; j < length; j++)
		{
			if (arr[j] < arr[index_min])
			{
				index_min = j;
			}
		}

		//최소값으로 스왑
		temp = arr[index_min];
		arr[index_min] = arr[i];
		arr[i] = temp;
	}
}

void insertionSort(int* arr, int length)
{

}

void mergeSort(int* arr, int* arr_sorted, int left, int right)
{
	int middle;
	if (left < right)
	{
		//분할
		middle = (left + right) / 2;
		mergeSort(arr, arr_sorted, left, middle);	//왼쪽
		mergeSort(arr, arr_sorted, middle + 1, right);

		//정복 및 결합
		merge(arr, arr_sorted, left, middle, right);
	}
}

void merge(int* arr, int* arr_sorted, int left, int middle, int right)
{
	int i = left;
	int j = middle + 1;
	int k = left;
	int l;

	//정복 과정
	while (i <= middle && j <= right)
	{
		if (arr[i] <= arr[j])
		{
			arr_sorted[k] = arr[i];
			i++;
		}
		else
		{
			arr_sorted[k] = arr[j];
			j++;
		}
		k++;
	}

	//남은 리스트의 요소들 그대로 복사
	if (i > middle)
	{
		for (l = j; l <= right; l++)
		{
			arr_sorted[k] = arr[l];
			k++;
		}
	}
	else
	{
		for (l = i; l <= middle; l++)
		{
			arr_sorted[k] = arr[l];
			k++;
		}
	}

	//기존 리스트에 값 복사
	for (int l = left; l <= right; l++)
	{
		arr[l] = arr_sorted[l];
	}
	
}

