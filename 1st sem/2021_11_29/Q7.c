#include<stdio.h>

int main()
{
    int arr[50],n,large,small;
    printf("How many numbers you want to store? (max 50) ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d",&arr[i]);
    }

    large = small = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i]>large)        
            large = arr[i];
        if (arr[i]<small)
            small = arr[i];                
    }    
    
    printf("The difference between largest and smallest numbers : %d\n",large-small);
    return 0;
}