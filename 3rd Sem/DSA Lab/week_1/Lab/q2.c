#include<stdio.h>
#include<stdlib.h>

//WAP to reverse the contents of a dynamic array of n elements.

int main(){
    int n, temp;
    int* arr;

    printf("Enter the number of elemets: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        *(arr+i) = rand()%100;
        printf("%d ", *(arr+i));
    }
    printf("\n");
    
    for (int i = 0; i < n/2; i++)
    {
        temp = *(arr +i);
        *(arr+i) = *(arr+n-i-1);
        *(arr+n-i-1) = temp;        
    }

    for (int i = 0; i < n; i++)
        printf("%d ", *(arr+i));

    
    return 0;
}
