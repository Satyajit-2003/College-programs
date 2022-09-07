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
    {
        sum+=arr[i];
        prod*=arr[i];
    }
    printf("The sum of elements is %d.\nThe product of elements is %d\n",sum,prod);
    
    return 0;
}
