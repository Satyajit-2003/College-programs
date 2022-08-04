#include<stdio.h>

int main()
{
    int arr[100],n, temp=0;
    printf("How many numbers you want to store? (max 100) ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i <= (n-1)/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    } 

    for (int i = 0; i < n; i++)
        printf("%d\n",arr[i]);
    
    
    return 0;
}