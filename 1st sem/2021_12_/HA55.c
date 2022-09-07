#include<stdio.h>

int main()
{
    int arr[3], temp;

    for (int i = 0; i < 3; i++)
    {
        printf("Enter %d element of the array: ",i+1);
        scanf("%d",&arr[i]);
    }

    if (arr[0]>arr[1])
    {
        temp = arr[0];
        arr[0] = arr[1];
        arr[1] = temp;
    }

    if (arr[1]>arr[2])
    {
        temp = arr[2];
        arr[2] = arr[1];
        arr[1] = temp;
    }

    if (arr[0]>arr[1])
    {
        temp = arr[0];
        arr[0] = arr[1];
        arr[1] = temp;
    }

    printf("Array after sorting: ");    
    for (int i = 0; i < 3; i++)
        printf("%d\t",arr[i]);    

    return 0;
}
