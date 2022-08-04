//Q1

#include <stdio.h>

void sort(int n, int* p)
{
    int i, j, temp;
    for (i = 0; i < n; i++) {  
        for (j = i + 1; j < n; j++) {  
            if (*(p + j) < *(p + i)) {  
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }

    printf("Sorted array is: ");
    for (i = 0; i < n; i++)
        printf("%d\t", *(p + i));
}

int main()
{
    int n;
    printf("Enter the size : ");
    scanf("%d", &n);
    int arr[100];

    for (int a = 0; a < n; a++)
    {
        printf("Enter %d element : ", a+1);
        scanf("%d", &arr[a]);
    }
  
    sort(n, arr);
  
    return 0;
}