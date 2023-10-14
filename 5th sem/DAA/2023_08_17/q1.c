#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int binary_search(int* arr, int n, int num){
    int low = 0, high = n - 1, mid;
    while(low <= high){

        
        mid = (low + high) / 2;
        if(arr[mid] == num){
            return mid;
        }else if(arr[mid] > num){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return -1;
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *arr, int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quick_sort(int *arr, int low, int high)
{
    if (low < high) {
        int pi = partition(arr, low, high);

        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

int main(){
    srand(time(0));
    int* arr;
    time_t start, end;
    int res, k;
    for (int size = 100000; size <= 1000000; size += 100000){
        printf("\nFor input %d: \n", size);

        arr = (int*) malloc(sizeof(int) * size);
        for (int i = 0; i < size; i++){
            arr[i] = rand();
        }

        quick_sort(arr, 0, size-1);

        start = clock();
        k = rand()%size;
        res = binary_search(arr, size, arr[k]);
        end = clock();
        // printf("%d %d\n", k, res);
        printf("Time taken in average case: %lf\n", ((long double)(end-start))/(CLOCKS_PER_SEC * 100));

        start = clock();
        res = binary_search(arr, size, arr[0]);  
        end = clock();
        // printf("%d %d\n", 0, res);
        printf("Time taken in best case: %lf\n", ((long double)(end-start))/(CLOCKS_PER_SEC * 100));

        start = clock();
        res = binary_search(arr, size, arr[size-1]);
        end = clock();
        // printf("%d %d\n", size-1, res);
        printf("Time taken in worst case: %lf\n", ((long double)(end-start))/(CLOCKS_PER_SEC * 100));

        free(arr);
    }
}