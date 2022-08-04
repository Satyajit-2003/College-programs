#include<stdio.h>

int main()
{    
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    printf("Even numbers are\n");
    for (int i = 0; i < num+1; i+=2)    
        printf("%d ",i);
    
    
    printf("\nOdd numbers are:\n");
    for (int j = 1; j < num+1; j+=2)
        printf("%d ",j);

    printf("\n");  
    
    return 0;
}
