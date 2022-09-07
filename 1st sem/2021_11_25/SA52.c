#include<stdio.h>

int main()
{
    int arr[50],n,sum=0;
    printf("How many numbers you want to store? (max 50) ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++)
        sum+=arr[i];
    
    printf("The Sum of numbers in array is %d\n",sum);
    return 0;
}
