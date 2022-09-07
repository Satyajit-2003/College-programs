//1.c program to create a new array from a given array with the elements divsible by 5
#include<stdio.h>

int main()
{
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d",&n);

    int arr[n], arr1[n], j=0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element of array: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%5 == 0)
        {
            arr1[j] = arr[i];
            j+=1;
        }        
    }

    printf("\nThe new array is: ");
    for (int k = 0; k < j; k++)
        printf("%d\t",arr1[k]);
    
       

    return 0;
}
