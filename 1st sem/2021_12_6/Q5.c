//5.Write a C program to insert element in array at specified position
#include<stdio.h>
#include<math.h>

int main()
{
    int n, temp;
    printf("Enter number of elements in the array: ");
    scanf("%d",&n);

    int arr[n+1], ele, pos;
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element of array: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter element to be inserted: ");
    scanf("%d",&ele);
    printf("Enter position to be inserted at: ");
    scanf("%d", &pos);

    if (pos>n)
    {
        printf("More than size of array\nTERMINATING....\n");
        return 0;
    }
    
    for (int i = n; i >= pos; i--)
        arr[i+1] = arr[i];
    arr[pos] = ele;

    printf("Array after inserting : ");
    for (int i = 0; i < n+1; i++)
        printf("%d\t", arr[i]); 
    
    return 0;
}
