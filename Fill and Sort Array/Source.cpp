#include<iostream>
using namespace std;
void Fill_array(int arr[],int size)
{
	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0)
		{
			arr[i] = rand() % (100 - 65) + 65;
		}
		else
		{
			arr[i] = 1 + rand() % (64 - 1);
		}
		
	}
}
void Print_Array(int arr[],int size)
{
	cout << "The elements of the array:" << endl;
	for (int j = 0; j < size; j++)
	{
		cout << arr[j] << endl;
	}
}
bool isSorted(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > arr[i + 1])
			return false;

	}
	return true;
}
void Min_max(int array[], int Size, int& min, int& max)
{
	for (int i = 1; i < Size; i++)
	{
		if (array[i] < min)
			min = array[i];
		if (array[i] > max)
			max = array[i];
	}
}
void main()
{
	const int Size = 10;
	int array[Size];
	Fill_array(array, Size);
	int min = array[0];
	int max = array[0];
	Print_Array(array, Size);
	if (isSorted(array, Size) == true)
		cout << "The array is sorted ascendingly." << endl;
	else
		cout << "The array is not sorted ascendingly." << endl;
	Min_max(array, Size, min, max);
	cout << "The minimum mark is: " << min << endl;
	cout << "The maximum mark is: " << max << endl;
}