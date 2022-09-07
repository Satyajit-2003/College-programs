#include<stdio.h>

int sum(int x, int y){
    int sum1;
    sum1 = x +y;
    return sum1;
}

int main()
{
    int num1,num2;
    printf("Enter number 1: ");
    scanf("%d",&num1);
    printf("Enter number 2: ");
    scanf("%d",&num2);

    int sum1 = sum(num1,num2);

    printf("The sum of %d and %d numbers is %d", num1,num2,sum1);
    return 0;
}
