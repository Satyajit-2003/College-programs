#include<stdio.h>
#include<stdlib.h>

//Given an unsorted dynamic array arr and two numbers x and y, find the
//minimum distance between x and y in arr.

int distance(int *arr, int len, int x, int y);

int main(){
    int len, x,y;
    int *arr;

    printf("Enter number of elements in array: ");
    scanf("%d", &len);
    arr = (int *)malloc(len * sizeof(int));

    for (int i = 0; i < len; i++)
    {
        *(arr + i) = rand() % 14;
        printf("%d ", *(arr+i));
    }
    printf("\n");

    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

    int ans = distance(arr, len, x, y);

    if (ans != -1)
        printf("Distance is %d", ans);
    else
        printf("One or both elements not present");


    return 0;
}

int distance(int *arr, int len, int x, int y){
    int found = 0, res = 0;
    for (int i = 0; i < len; i++)
    {
        if (! found){
            if (*(arr+i) == x)
                found = 1;
        }
        if (found){
            if (*(arr+i) == x)
                res = 0;
            if (*(arr+i) == y)
                return res;
            res ++;
        }
    }
    return -1;
}