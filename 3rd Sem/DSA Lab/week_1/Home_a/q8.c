#include<stdio.h>
#include<stdlib.h>

//WAP to find the largest number and counts the occurrence of the 
//largest number in a dynamic array of n integers using a single loop.

int main(){
    int len, largest, count = 0;
    int* arr;

    printf("Enter the number of elements in array: ");
    scanf("%d", &len);
    arr = (int *)malloc(len * sizeof(int));

    for (int i = 0; i < len; i++)
    {
        *(arr +i) = rand()%3;
        printf("%d ", *(arr+i));
    }
    largest = *arr;

    for (int i = 0; i < len; i++)
    {
        if (*(arr+i) > largest){
            largest = *(arr+i);
            count = 1;
        }
        else if (*(arr+i) == largest)
            count ++;
    }

    printf("\nLargest elements is %d, which occours %d numbers of times", largest, count)    ;

    return 0;
}