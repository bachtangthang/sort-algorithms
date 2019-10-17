#include "ham.h"
void main()
{
	int array[100000];
	int n = 100000;
	clock_t start, end;
	double cpu_time_used;
	start = clock();
	//GenerateRandomData(array, n);
	//GenerateNearlySortedData(array, n);
	GenerateReverseData(array, n);
	//GenerateSortedData(array, n);
	//selectionSort(array, n);
	//insertionSort(array, n);
	//bubbleSort(array, n);
	ShakerSort(array, n);
	//shellSort(array, n);
	//insertionbinarySort(array, n);
	/*{
		int l = 0;
		int r = n;
		quickSort(array, l, r);
	}*/
	end = clock();
	cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	cout << cpu_time_used;
}