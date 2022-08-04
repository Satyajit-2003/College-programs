#include<stdio.h>

int main()
{
    int n, temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element of the array: ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int k = 0; k < n; k+=2)
    {
        if (k+1 < n)
        {
            printf("%d %d \n", arr[k], arr[k+1]);
            temp = arr[k];
            arr[k] = arr[k+1];
            arr[k+1] = temp;
        }
        else
            break;        
    }

    for (int i = 0; i < n; i++)
        printf("%d\t",arr[i]);  

    return 0;
}
