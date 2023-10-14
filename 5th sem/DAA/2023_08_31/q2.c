#include<stdio.h>
#include<stdlib.h>

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

	if (left < N && arr[left] > arr[largest]){
        largest = left;
    }
	if (right < N && arr[right] > arr[largest]){
		largest = right;
    }
	if (largest != i) {

		swap(&arr[i], &arr[largest]);
		heapify(arr, N, largest);
	}
}

int main(){
    int N;
    scanf("%d", &N);
    int* arr = (int*) malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++){
        arr[i] = rand()%100;
        printf("%d ", arr[i]);
    }
    printf("\n");
    heapify(arr, N, 0);
    for (int i = 0; i < N; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}