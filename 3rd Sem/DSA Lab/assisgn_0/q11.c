#include<stdio.h>

//WAP to swap two numbers using call by reference.

void swap(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main(){
    int num1, num2;
    printf("Enter the two numbers: ");
    scanf("%d %d", &num1, &num2);

    swap(&num1, &num2);
    printf("After swapping: \n");
    printf("Num1: %d\nNum2: %d", num1, num2);

    return 0;
}