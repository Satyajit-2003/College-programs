//Q3
//Print array elements

#include<stdio.h>

void print_array(int arr[], int start, int length){
    if (start == length)
        return;
    
    printf("%d\t", arr[start]);
    print_array(arr, ++start, length);
    
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
    print_array(arr, 0, len);    
    
    return 0;
}
