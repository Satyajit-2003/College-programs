#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(char* a, char* b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

int partition(char *arr, int low, int high)
{
    char pivot = arr[high];
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

void quick_sort(char *arr, int low, int high)
{
    if (low < high) {
        int pi = partition(arr, low, high);

        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

int main(){
    int N;
    scanf("%d", &N);
    char* arr = (char*) malloc(sizeof(char) * N);
    srand(time(0));
    for (int i = 0; i < N; i++){
        if (rand()%2 == 0)
            arr[i] = rand()%26 + 'a';
        else
            arr[i] = rand()%26 + 'A';
        printf("%c ", arr[i]);
    }
    printf("\n");

    int j = 0;
    char* arr2 = (char*) malloc(sizeof(char) * N);
    for (int i = 0; i < N; i++){
        if (arr[i] >= 'A' && arr[i] <= 'Z'){
            arr2[j] = arr[i];
            j++;
        }
    }

    quick_sort(arr2, 0, j-1);

    j = 0;
    for (int i = 0; i < N; i++){
        if (arr[i] >= 'A' && arr[i] <= 'Z'){
            arr[i] = arr2[j];
            j++;
        }
    }

    for (int i = 0; i < N; i++){
        printf("%c ", arr[i]);
    }
    return 0;
}