#include<stdio.h>

struct exp{
    char name[30];
    int price;
    int quan;
    int total;
};

int main(){
    int n, total =0, fri;
    printf("Enter total number of items: ");
    scanf("%d", &n);

    struct exp arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter item %d:\n", i+1);
        printf("Enter item name: ");
        gets(arr[i].name);
        gets(arr[i].name);
        printf("Enter price: ");
        scanf("%d", &arr[i].price);
        printf("Enter quantity: ");
        scanf("%d", &arr[i].quan);
        printf("\n");
        arr[i].total = arr[i].quan * arr[i].price;
        total += arr[i].total;
    }

    printf("%10s %5s %5s %5s\n", "Name", "Quan", "Price", "Total");
    for (int i = 0; i < n; i++)
        printf("%10s %5d %5d %5d\n", arr[i].name, arr[i].quan, arr[i].price, arr[i].total);\

    printf("Total Amount : %d\n", total);
    
    printf("Enter number of friends: ");
    scanf("%d", &fri);

    printf("Amount to be paid by one %.2f", total/(float)fri);    
    
    return 0;    
}