#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void insertionSort(int *arr, int len){
    int i, j, key;

    for (int i = 0; i < len; i++){
        key = arr[i];
        j = i-1;

        while (j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
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

    insertionSort(array, length);
    
    for (int i = 0; i < length; i ++){
        printf("%d ", array[i]);
    }
    free(array);
}