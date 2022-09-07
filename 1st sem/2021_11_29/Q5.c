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

    for (int i = 0; i < n; i++) {     
        for (int j = i+1; j < n; j++) {     
           if(arr[i] < arr[j]) {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
           }     
        }     
    }    

    for (int k = 0; k < n; k++)
        printf("%d\n",arr[k]);


    return 0;
}
