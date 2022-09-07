#include<stdio.h>

int main()
{
    int arr[50],n,large = 0;
    printf("How many numbers you want to store? (max 50) ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (large< arr[i] && arr[i]%2==0)
            large = arr[i];
    }  
    
    printf("The largest number in array is %d\n",large);
    return 0;
}
