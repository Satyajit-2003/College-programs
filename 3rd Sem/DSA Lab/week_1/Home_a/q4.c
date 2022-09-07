#include<stdio.h>
#include<stdlib.h>

//Write a program to replace every element in the dynamic array with the
//next greatest element present in the same array.

int NGE(int *arr, int j, int len);

int main(){
    int len, res;
    int* arr;

    printf("Enter the number of elements in array: ");
    scanf("%d", &len);
    arr = (int *)malloc(len * sizeof(int));

    for (int i = 0; i < len; i++)
    {
        *(arr +i) = rand()%10;
        printf("%d ", *(arr+i));
    }
    printf("\nReplaced Array: \n");

    for (int i = 0; i < len; i++)
    {
        res = NGE(arr, i, len);
        if (res != -1)
            *(arr+i) = res;
    }
    
    for (int i = 0; i < len; i++)
        printf("%d ", *(arr+i));

    return 0;
}

int NGE(int *arr, int j, int len){
    for (int i = j+1; i < len; i++)
    {
        if (*(arr+i)>*(arr+j))
            return *(arr+i);
    }

    return -1; 

}