#include<stdio.h>
#include<stdlib.h>
#include<time.h>

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

void heapSort(int *arr, int N)
{
	for (int i = N / 2 - 1; i >= 0; i--){
		heapify(arr, N, i);
    }

	for (int i = N - 1; i >= 0; i--) {

		swap(&arr[0], &arr[i]);
		heapify(arr, i, 0);
	}
}

void reverse(int* arr, int size){
    for (int i = 0; i < size/2; i++){
        swap(arr+i, arr+size-i-1);
    }
}

int main2(){

    //Testing heap sort with 100 random numbers
    int* arr = (int*) malloc(sizeof(int) * 100);
    for (int i = 0; i < 100; i++){
        arr[i] = rand()%100;
        printf("%d ", arr[i]);
    }
    printf("\n");
    heapSort(arr, 100);
    for (int i = 0; i < 100; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    srand(time(0));
    int* arr;
    time_t start, end;
    for (int size = 100000; size <= 1000000; size += 100000){
        printf("\nFor input %d: \n", size);

        arr = (int*) malloc(sizeof(int) * size);
        for (int i = 0; i < size; i++){
            arr[i] = rand()%100;
        }

        start = clock();
        heapSort(arr, size);
        end = clock();
        printf("Time taken in average case: %lf\n", ((double)(end-start))/(CLOCKS_PER_SEC * 100));

        start = clock();
        heapSort(arr, size);  
        end = clock();
        printf("Time taken in best case: %lf\n", ((double)(end-start))/(CLOCKS_PER_SEC * 100));

        reverse(arr, size);
        start = clock();
        heapSort(arr, size);
        end = clock();
        printf("Time taken in worst case: %lf\n", ((double)(end-start))/(CLOCKS_PER_SEC * 100));

        free(arr);
    }
}

