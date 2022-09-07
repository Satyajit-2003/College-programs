#include<stdio.h>

void odd_or_not(int num);

int main()
{
    int n;
    printf("Enter num1: ");
    scanf("%d",&n);
    odd_or_not(n);

    return 0;
}


void odd_or_not(int num){
    if (num%2 == 1)
        printf("The number is odd");
    else
        printf("The number is even");
}
