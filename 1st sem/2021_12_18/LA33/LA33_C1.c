#include<stdio.h>

void odd_or_not();

int main()
{
    odd_or_not();
    return 0;
}

void odd_or_not(){
    int n;
    printf("Enter num1: ");
    scanf("%d",&n);
    if (n%2 == 1)
        printf("The number is odd");
    else
        printf("The number is even");
}
