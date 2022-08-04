//Q4
//largest array elements

#include<stdio.h>

int large=-32000;
void large_array(int arr[], int start, int length){
    if (start == length)
        return;
    
    if (arr[start]>large)
        large = arr[start];
    
    large_array(arr, ++start, length);
    
}

int main()
{
    int len;
    printf("Enter size of array: ");
    scanf("%d", &len);
    int arr[len];

    for (int i = 0; i < len; i++)
    {
        printf("Enter %d element: ", i+1);
        scanf("%d", &arr[i]);
    }

    large_array(arr, 0, len);
    printf("The largest element is: %d", large);    
    
    return 0;
}
