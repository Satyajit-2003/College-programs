#include<stdio.h>

void swap(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("The values after swapping %d and %d", x,y);
}

int main()
{
    int num1,num2;
    printf("Enter number 1: ");
    scanf("%d",&num1);
    printf("Enter number 2: ");
    scanf("%d",&num2);

    swap(num1, num2);

    return 0;
}
