#include<stdio.h>

_Bool prime(int num1);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if (prime(num))
        printf("The given number is prime");
    else
        printf("The number is not prime");
    
    
    return 0;
}

_Bool prime(int num1){
    if (num1 == 2)
        return 1;
    
    for (int i = 1; i < num1/2; i++)
    {
        if (num1%2 == 0)
            return 0;
    }
    return 1;    
}