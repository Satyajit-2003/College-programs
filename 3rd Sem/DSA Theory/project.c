#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int heap_op, merge_op, quick_op;
void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void heapify(int *arr, int N, int i)
{
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;
    heap_op += 5;
	if (left < N && arr[left] > arr[largest])
		largest = left;
	if (right < N && arr[right] > arr[largest])
		largest = right;
	if (largest != i) {
		swap(&arr[i], &arr[largest]);
		heapify(arr, N, largest);
	}
}

void heapSort(int *arr, int N)
{
	for (int i = N / 2 - 1; i >= 0; i--)
		heapify(arr, N, i);
	for (int i = N - 1; i >= 0; i--) {
        heap_op += 3;
		swap(&arr[0], &arr[i]);
		heapify(arr, i, 0);
	}
}

void merge(int *arr, int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	int L[n1], R[n2];
    merge_op += 5;

	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	i = 0; 
	j = 0; 
	k = l; 
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int *arr, int l, int r)
{
    merge_op += 1;
	if (l < r) {
		int m = l + (r - l) / 2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
		merge(arr, l, m, r);
	}
}

int partition(int *array, int start, int end){
    int partition_index = start;
    for (int i = start; i <= end-1; i++){
        quick_op += 1;
        if (array[i] < array[end]){
            swap(&array[i], &array[partition_index]);
            quick_op += 3;
            partition_index++;
        }
    }
    quick_op += 3;
    swap(&array[partition_index], &array[end]);
    return partition_index;
}

void quickSort(int *array, int start, int end){
    quick_op += 1;
    if (start < end){
        int pivot = partition(array, start, end);
        quickSort(array, start, pivot-1);
        quickSort(array, pivot+1, end);
    }
}

int main(){
    srand(time(0));
    clock_t start;
    clock_t end;

    for (int i = 10000; i <=100000; i += 10000){
        merge_op = heap_op = quick_op = 0;
        int *heap = (int *)malloc(i * sizeof(int));
        int *quick = (int *)malloc(i * sizeof(int));
        int *merge = (int *)malloc(i * sizeof(int));

        for (int j = 0; j < i; j++){
            int temp = rand();
            heap[j] = temp;
            quick[j] = temp;
            merge[j] = temp;
        }

        printf("%d :\n", i);
        start = clock();
        quickSort(quick, 0, i);
        end = clock();
        // printf("Quick Sort: %lf\n", ((double)(end - start))/(CLOCKS_PER_SEC*100));
        printf("Quick Sort: %d\n", quick_op);

        start = clock();
        mergeSort(merge, 0, i);
        end = clock();
        // printf("Merge Sort: %lf\n", ((double)(end - start))/(CLOCKS_PER_SEC*100));
        printf("Merge Sort: %d\n", merge_op);

        start = clock();
        heapSort(heap, i);
        end = clock();
        // printf("Heap Sort: %lf\n", ((double)(end - start))/(CLOCKS_PER_SEC*100));      
        printf("Heap Sort: %d\n", heap_op);


    }
}