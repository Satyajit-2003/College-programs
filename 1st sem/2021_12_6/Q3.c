//3.Write a C program to count frequency of each element in an array.
#include<stdio.h>
#include<math.h>

int main()
{
    int n, temp;
    printf("Enter number of elements in the array: ");
    scanf("%d",&n);

    int arr[n],fr[n], count;
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element of array: ",i+1);
        scanf("%d",&arr[i]);
    }   

    for (int i = 0; i < n; i++)
    {
        count = 1;
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count ++;
                fr[j] = 0;
            }        
        }

        if (fr[i] != 0)
            fr[i] = count;       
        
        
    }

    printf("\nThe frequencies of varios elements in the array: \n");
    for (int i = 0; i < n; i++)
    {
        if (fr[i] != 0)
            printf("%d\t:\t%d\n",arr[i],fr[i]);        
    }
    
    
    return 0;
}
