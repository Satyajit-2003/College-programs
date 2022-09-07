//8.C Program to check prime numbers in an array 
#include<stdio.h>

int main()
{
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d",&n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element of array: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("The Prime numbers in the array are :\n");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] ==2)
        {
            printf("2\t");
            continue;
        }
        
        for (int j = 2; j < arr[i]; j++)
        {
            if (arr[i]%j == 0)
                break;
            if (j == (arr[i]-1))
                printf("%d\t",arr[i]);       
        }        
    }  

    return 0;
}
