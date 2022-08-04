#include<stdio.h>
#include<stdlib.h>

//WAP to replace every dynamic array element by multiplication 
//of previous and next of an n element.

int main(){
    int len, res, last_replaced;
    int* arr;

    printf("Enter the number of elements in array: ");
    scanf("%d", &len);
    arr = (int *)malloc(len * sizeof(int));

    for (int i = 0; i < len; i++)
    {
        *(arr +i) = rand()%10;
        printf("%d ", *(arr+i));
    }
    printf("\n");

    last_replaced = 1;
    for (int i = 0; i < len-1; i++)
    {
        res = last_replaced * *(arr+i+1);
        last_replaced = *(arr+i);
        *(arr+i) = res;
    }
    *(arr+len-1) = last_replaced;

    for (int i = 0; i < len; i++)
        printf("%d ", *(arr+i));

    return 0;
}