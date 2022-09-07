#include<stdio.h>

int main()
{
    int arr[50],n;
    printf("How many numbers you want to store? (max 50) ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d",&arr[i]);
    }
    int large = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (large< arr[i])
            large = arr[i];
    }  
    
    printf("The largest number in array is %d\n",large);
    return 0;
}
