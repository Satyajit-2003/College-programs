#include<stdio.h>
#include<stdlib.h>

//WAP to find out the second smallest and 
//second largest element stored ina dynamic array.

void sort(int* arr, int n);

int main(){
    int len;
    int *arr;

    printf("Enter size of array: ");
    scanf("%d", &len);
    arr = (int *) malloc(len * sizeof(int));

    for (int i = 0; i < len; i++)
    {
        *(arr +i) = rand()%69;
        printf("%d ", *(arr+i));
    }
    sort(arr, len);

    printf("\nSecond largest element: %d", *(arr+len-2));
    printf("\nSeconds smallest element: %d", *(arr+1));   


    return 0;
}


void sort(int* arr, int n){
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (*(arr+j) > *(arr+j+1)){
                temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;
            }
        }        
    }
}