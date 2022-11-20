#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int* a, int* b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void selectionSort(int *arr, int length){
    int smallest;
    for (int i = 0; i < length-1; i++){
        smallest = i;
        for (int j = i+1; j < length; j++){
            if (arr[j] < arr[smallest]){
                smallest = j;
            }
            if (smallest != i)
                swap(&arr[i], &arr[smallest]);
        }
    }
}

int main(){
    srand(time(0));
    int length;
    printf("Enter the length of array: ");
    scanf("%d", &length);
    int* array = (int *)malloc(length * sizeof(int));

    for (int i = 0; i < length; i ++){
        array[i] = rand()%100;
        printf("%d ", array[i]);
    }
    printf("\n");

    selectionSort(array, length);
    
    for (int i = 0; i < length; i ++){
        printf("%d ", array[i]);
    }
    free(array);
}