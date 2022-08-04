#include<stdio.h>
#include<stdlib.h>

//given an array of 0s and 1s in random order. Segregate 0s on left
//side and 1s on right side of the array. Traverse array only once.

void sort_zero_one(int *arr, int len);

int main(){
    int len, res;
    int* arr;

    printf("Enter the number of elements in array: ");
    scanf("%d", &len);
    arr = (int *)malloc(len * sizeof(int));

    for (int i = 0; i < len; i++)
    {
        *(arr +i) = rand()%2;
        printf("%d ", *(arr+i));
    }
    printf("\nSorted Array: \n");
    sort_zero_one(arr, len);
    
    for (int i = 0; i < len; i++)
        printf("%d ", *(arr+i));

    return 0;
}


void sort_zero_one(int *arr, int len){
    int left = 0, right = len-1;
    while (left<right)
    {
        while(*(arr+left) == 0) 
            left ++;

        while (*(arr+right) == 1)
            right --;

        if (left<right){
            *(arr+left) = 0;
            *(arr+right) = 1;
        }
    }
}
