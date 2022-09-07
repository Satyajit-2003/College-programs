#include<stdio.h>

int main()
{
    int arr[50],n,num;
    printf("How many numbers you want to store? (max 50) ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nEnter the number to be delete : ");
    scanf("%d",&num);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            for (int j = i; j < n; j++)
                arr[j] = arr[j+1];
            printf("Elements after deleting:\n ");
            for (int i = 0; i < n-1; i++)
                printf("%d\t", arr[i]);
            break;           
            
        }
        if (i == n-1)
            printf("Element not found\n");        
    }    


    
    printf("\n");
    return 0;
}