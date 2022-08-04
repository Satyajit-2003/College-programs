//6.C program to delete duplicate elements from array
#include<stdio.h>
#include<math.h>

int main()
{
    int n, temp;
    printf("Enter number of elements in the array: ");
    scanf("%d",&n);

    int arr[n],dup[n], size;
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element of array: ",i+1);
        scanf("%d",&arr[i]);
    }   
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = 0; k < n-1; k++)
                    arr[k] = arr[k+1];
                
                n--;
                j--;                                
            }            
        }        
    }

    printf("Array after removing duplicate elements: \n");
    for (int i = 0; i < n; i++)
        printf("%d\t",arr[i]);  
    
    return 0;
}
