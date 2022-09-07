//Q1

#include<stdio.h>

int main()
{
    int arr[10], *ptr, sum = 0;
    float avg;

    ptr = arr;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter %d element: ", i+1);
        scanf("%d", (ptr+i));
    }

    for (int i = 0; i < 10; i++){
        sum += *(ptr+i);
        printf("%d %d\n", sum, *(ptr+i));
        }

    avg = sum/10.0;

    printf("The average is %.2f", avg);
    
    
    return 0;
}
