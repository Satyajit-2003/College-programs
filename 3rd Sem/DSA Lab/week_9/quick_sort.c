#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int *a, int *b){
    if (*a == *b)
        return;
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int partition(int *array, int start, int end){
    int partition_index = start;
    for (int i = start; i <= end-1; i++){
        if (array[i] < array[end]){
            swap(&array[i], &array[partition_index]);
            partition_index++;
        }
    }
    swap(&array[partition_index], &array[end]);
    return partition_index;
}

void quick_sort(int *array, int start, int end){
    if (start < end){
        int pivot = partition(array, start, end);
        quick_sort(array, start, pivot-1);
        quick_sort(array, pivot+1, end);
    }
}

int run(int length){
    srand(time(0));
    clock_t strt, edn;
    int* array = (int *)malloc(length * sizeof(int));

    for (int i = 0; i < length; i ++){
        array[i] = rand()%100;
    }
    printf("\n");

    strt = clock();
    quick_sort(array, 0, length);
    edn = clock();

    float duration = (float) (edn-strt) /CLOCKS_PER_SEC;
    printf("%d, %f\n",length, duration);
    free(array);
}

int main(){
    for (int i = 20000; i < 1000000; i = i+ 50000){
        run(i);
    }
}