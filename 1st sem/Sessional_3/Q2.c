#include<stdio.h>

//WAP to create a stucture for entering the details of 
//5 products(name,quantity,price) and then print the total price of all the 5 products.

struct item{
    char name[20];
    int quan;
    int price;
};

int main(){
    struct item arr[5];
    int total_price = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter details of item %d\n", i+1);
        printf("Enter name of the product: ");
        gets(arr[i].name);
        if (i != 0)
            gets(arr[i].name);
        printf("Enter quantity: ");
        scanf("%d", &arr[i].quan);
        printf("Enter price: ");
        scanf("%d", &arr[i].price);
        total_price += (arr[i].quan * arr[i].price);
    }

    printf("\nTotal price is: %d", total_price);

    return 0;
    
}