#include<stdio.h>
#include<string.h>

struct book
{
    char title[30];
    char author[50];
    char publication[20];
    int price;
};

int main(){
    int n;
    char temp[50];
    printf("Enter num of books: ");
    scanf("%d", &n);

    struct book arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for books %d\n", i+1);
        printf("Enter title: ");
        gets(arr[i].title);
        gets(arr[i].title);
        printf("Enter author: ");
        gets(arr[i].author);
        printf("Enter publication : ");
        gets(arr[i].publication);
        printf("Enter price : ");
        scanf("%d", &arr[i].price);
    }

    printf("Enter the author you want: ");
    gets(temp);
    gets(temp);
    
    for (int i = 0; i < n; i++)
    {
        if (strcmp(temp, arr[i].author) == 0)
        {
            printf("Title: %s\n", arr[i].title);
            printf("Author: %s\n", arr[i].author);
            printf("Publication : %s\n", arr[i].publication);
            printf("Price : %d\n\n", arr[i].price);
        }
        
    }

    return 0;    

}