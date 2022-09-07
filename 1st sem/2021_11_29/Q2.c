#include<stdio.h>

int main()
{
    int arr[50],n,sum = 0,prod = 1;
    printf("How many numbers you want to store? (max 50) ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++)
        arr[i] %= 2;
    
    printf("Elements after swpping:\n ");
    for (int i = 0; i < n; i++)
        printf("%d\t", arr[i]);
    printf("\n");
    return 0;
}