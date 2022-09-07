#include<stdio.h>

int main()
{
    int arr[100],n;
    printf("How many numbers you want to store? (max 100) ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2 == 0 && arr[i]/100>=1 && arr[i]/1000==0)
            printf("%d\n",arr[i]);
    } 
    
    return 0;
}