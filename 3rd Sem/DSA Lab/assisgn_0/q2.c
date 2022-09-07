#include<stdio.h>

//WAP to find out the sum of the numbers stored in an array of integers.

int main(){
    int n, sum = 0;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++){
        printf("Enter %d element: ", i+1);
        scanf("%d", arr+i);
    }

    for (int i = 0; i < n; i++)
        sum += *(arr +i);
    
    printf("The sum is: %d", sum);
    
    printf("\n");
    return 0;
    
}