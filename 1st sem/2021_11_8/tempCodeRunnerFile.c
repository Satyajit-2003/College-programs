#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter num1: ");
    scanf("%d",&num1);
    printf("Enter num2: ");
    scanf("%d",&num2);
    num1 ^= num2, num2^=num1, num1^=num2;
    printf("The swapped values of num1 and num2 are %d and %d \n",num1,num2);

    return 0;
}