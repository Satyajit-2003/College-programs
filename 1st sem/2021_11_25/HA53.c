#include<stdio.h>

int main()
{
    int arr[50],n, temp = 0;
    printf("How many numbers you want to store? (max 50) ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i = 1; i < n-1; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
    }

    if (n%2 == 0)
    {
        int m1 = arr[n/2];
        int m2 = arr[(n/2)-1];
        float m = (m1+m2)/2.00;
        printf("Median of the given values is %.2f\n",m);
    }
    else
    {
        int m = arr[n/2];
        printf("Median of the given values is %d\n",m);
    }

    return 0;
}
