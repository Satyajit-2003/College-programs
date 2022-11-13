#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void merge(int *left, int *right, int *org, int left_len, int right_len){
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < left_len && j <right_len){
        if (left[i] <= right[j]){
            org[k] = left[i];
            i++;
        }else{
            org[k] = right[j];
            j++;
        }
        k++;
    }
    while(i < left_len){
        org[k] = left[i];
        i++;
        k++;
    }
    while (j < right_len){
        org[k] = right[j];
        j++;
        k++;;
    }
}

void merge_sort(int *array, int length){
    if (length< 2)
        return;
    int mid = length /2;
    int* left = (int *)malloc(mid * sizeof(int));
    int* right = (int *)malloc((length-mid) * sizeof(int));
    for (int i = 0; i < mid; i++){
        left[i] = array[i];
    }
    for (int j = mid; j < length; j++){
        right[j-mid] = array[j];
    }
    merge_sort(left, mid);
    merge_sort(right, length-mid);
    merge(left, right, array, mid, length-mid);
    free(left);
    free(right);
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
    merge_sort(array, length);
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