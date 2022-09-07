#include<stdio.h>
#include<stdlib.h>

//WAP to find out the sum of N ELEMENTS IN ANA ARRAY USING RECURSION
int len;

int sum_array(int *arr, int sum, int index){
    if (index == len)
        return sum;
    sum += *(arr + index);
    sum_array(arr, sum, index+1);
}

int main(){
    int *arr;
    printf("Enter the number of elements: ");
    scanf("%d", &len);
    arr = (int *)malloc(len * sizeof(int));

    for (int i = 0; i < len; i++){
        *(arr+i) = rand()%100;
        printf("%d ", *(arr+i));
    }
    printf("\n");

    printf("The sum of elements of the array: %d", sum_array(arr, 0, 0));
    
    return 0;
}