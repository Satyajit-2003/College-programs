//Q8
//Sum of elements in array

#include<stdio.h>

int sum_array(int arr[], int start, int length, int sum){
    if (start == length)
        return sum;
    
    sum+= arr[start];
    sum_array(arr, ++start, length, sum);
    
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

    printf("The elements of the array: \n");
    int res = sum_array(arr, 0, len, 0);
    printf("The sum of the elements the array is %d", res);    
    
    return 0;
}
