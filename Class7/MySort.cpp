#include "MySort.h"

void selectionSort(int* arr, int length)
{
	int i, j;
	int index_min;	//�ӽ� �ּҰ��� �ε���
	int temp;		//�ӽ� �ּҰ�

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

		//�ּҰ����� ����
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
		//����
		middle = (left + right) / 2;
		mergeSort(arr, arr_sorted, left, middle);	//����
		mergeSort(arr, arr_sorted, middle + 1, right);

		//���� �� ����
		merge(arr, arr_sorted, left, middle, right);
	}
}

void merge(int* arr, int* arr_sorted, int left, int middle, int right)
{
	int i = left;
	int j = middle + 1;
	int k = left;
	int l;

	//���� ����
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

	//���� ����Ʈ�� ��ҵ� �״�� ����
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

	//���� ����Ʈ�� �� ����
	for (int l = left; l <= right; l++)
	{
		arr[l] = arr_sorted[l];
	}
	
}

