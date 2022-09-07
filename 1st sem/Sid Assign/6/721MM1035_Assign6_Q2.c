
/* Roll No: 721MM1035
Name : Siddhartha Priyadarshi*/

#include<stdio.h>
int sec_large(int arr[], int len){
    int large = arr[0], sec_large = 0;

    for (int i = 0; i < len; i++)
    {
        if (arr[i] > large)
            large = arr[i];        
    }
    
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > sec_large && arr[i] < large)
            sec_large = arr[i];
    }
    
    return sec_large;
}

int main(){
    int n;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element: ", i+1);
        scanf("%d", &arr[i]);
    }

    int res = sec_large(arr, n);

    printf("Second largest element is %d", res);
    
}