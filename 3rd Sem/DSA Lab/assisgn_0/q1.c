#include<stdio.h>
#define MAX 50

//WAP to create an array that can store max. 50 integers and display the contents of the array

int main(){
    int arr[MAX], n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("Enter %d element: ", i+1);
        scanf("%d", arr+i);
    }

    for (int i = 0; i < n; i++)
        printf("%d ", *(arr+i));
    
    printf("\n");
    return 0;
    
}