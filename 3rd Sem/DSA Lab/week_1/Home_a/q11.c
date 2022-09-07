#include<stdio.h>
#include<stdlib.h>

//WAP to arrange the elements of a dynamic array such that all even numbers
//are followed by all odd numbers using a single loop.

void sort_even_odd(int* arr, int len);

int main(){
    int len;
    int* arr;

    printf("Enter the number of elements in array: ");
    scanf("%d", &len);
    arr = (int *)malloc(len * sizeof(int));

     for (int i = 0; i < len; i++)
    {
        *(arr +i) = rand()%35;
        printf("%d ", *(arr+i));
    }
    sort_even_odd(arr, len);
    printf("\nSorted array: ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", *(arr+i));
    }
    
    return 0;
}

void sort_even_odd(int* arr, int len){
    int left = 0, right = len-1;
    while (left < right){
        while(*(arr+left) % 2 == 00)
            left ++;
        while (*(arr+right) % 2 != 0)
            right --;
        
        if (left<right) 
        {
            *(arr + left) = *(arr+left) + *(arr + right);
            *(arr + right) = *(arr + left) - *(arr+right);
            *(arr+left) = *(arr + left) - *(arr+right);
        }       
    }    
}