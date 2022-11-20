#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int* a, int* b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void bubbleSort(int*arr, int len){
    for (int i = 0; i < len; i++){
        for (int j = 0; j < len-i-1; j++){
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
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

    bubbleSort(array, length);
    
    for (int i = 0; i < length; i ++){
        printf("%d ", array[i]);
    }
    free(array);
}