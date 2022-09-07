#include<stdio.h>
#include<stdlib.h>

//WAP to find out the kth smallest and kth largest element stored in a dynamic
//array of n integers, where k<n.

int main(){
    int len, k;
    int* arr;

    printf("Enter the number of elements in array: ");
    scanf("%d", &len);
    arr = (int *)malloc(len * sizeof(int));

    for (int i = 0; i < len; i++)
    {
        *(arr +i) = rand()%100;
        printf("%d ", *(arr+i));
    }
    printf("\nEnter k: ");
    scanf("%d", &k);

    for (int i = 0; i < len-1; i++)
    {
        for (int j = 0; j < len-i-1; j++)
        {
            if (*(arr+j) > *(arr+j+1)) 
            {
                *(arr + j) = *(arr+j) + *(arr + j+1);
                *(arr + j+1) = *(arr + j) - *(arr+j+1);
                *(arr+j) = *(arr + j) - *(arr+j+1);
            } 
        }        
    }

    printf("%d th largest number: %d ", k, *(arr+len-k));
    printf("\n%d th smallest element: %d", k, *(arr+k));
    

    return 0;
}