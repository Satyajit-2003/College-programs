#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// int length;
int *array;

int get_left(int index){
    return (2*index);
}
int get_right(int index){
    return (2 * index + 1);
}
void swap(int* a, int* b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void max_heapify(int i)
{
    int largest = i;
    int left = get_left(i);
    int right = get_right(i);
 
    if (left < array[0] && array[left] > array[largest]) 
        largest = left;
    if (right < array[0] && array[right] > array[largest]) 
        largest = right;
    if (largest != i) { 
        swap(&array[i], &array[largest]);
        max_heapify(largest);
    }
}

void create_max_heap(int length){
    for (int i = (array[0])/2; i >=1; i--)
        max_heapify(i);
}

void heap_sort(int length){
    create_max_heap(length);
    for (int i = array[0]; i >= 1; i--){
        swap(&array[1], &array[i]);
        array[0]--;
        max_heapify(1);
    }
}

int run(int length){
    srand(time(0));
    clock_t strt, edn;
    array = (int *)malloc(length * sizeof(int));

    for (int i = 0; i < length; i ++){
        array[i] = rand()%100;
    }
    printf("\n");

    strt = clock();
    heap_sort(length);
    edn = clock();

    float duration = (float) (edn-strt) /CLOCKS_PER_SEC;
    printf(" %d, %f\n",length, duration);
    free(array);
}

int main(){
    for (int i = 20000; i < 1000000; i = i+ 50000){
        run(i);
    }
}
