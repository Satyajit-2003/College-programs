#include<stdio.h>

int main()
{    
    int num,temp;

    printf("Enter a number: ");
    scanf("%d",&num);

    printf("The reverse of %d is ",num);
    while (num>0)
    {
        temp = num%10;
        printf("%d",temp);
        num/=10;   
    }

    printf("\n") ;  
    
    return 0;
}