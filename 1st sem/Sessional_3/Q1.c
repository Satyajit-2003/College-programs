#include<stdio.h>

//Write a menu driven program using switch case to enter 5 elements into an array and the options are 
//1. print the sum of the elements 
//2.print the product of the elemnts,
//3.print the average of the elements.
void sum(int arr[]){
    int s = 0;
    for (int i = 0; i < 5; i++)
        s += arr[i];
    printf("Sum of elements is %d", s);    
}

void prod(int arr[]){
    int pr = 1;
    for (int i = 0; i < 5; i++)
        pr *= arr[i];
    printf("Product of elements is %d", pr);    
}

void avg(int arr[]){
    int s = 0;
    for (int i = 0; i < 5; i++)
        s += arr[i];
    printf("Average of elements is %.2f", s/5.0);
}

int main(){
    int arr[5], n;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
 
    printf("\nWhat do you want?\n");
    printf("Enter \n1 for sum of elements\n2 for product of elements\n3 for average of elements: ");
    scanf("%d", &n);
    printf("\n");

    switch (n)
    {
    case 1:
        sum(arr);
        break;
    
    case 2:
        prod(arr);
        break;
    
    case 3:
        avg(arr);
        break;
    
    default:
        printf("Invalid input, Terminating");
    }

    return 0;
    
}