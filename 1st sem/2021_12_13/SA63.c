#include<stdio.h>

int sum(int x);

int main()
{
    int num1;
    printf("Enter a number ");
    scanf("%d",&num1);

    int sum1 = sum(num1);

    printf("The sum of digit of %d is %d", num1,sum1);
    return 0;
}

int sum(int x){
    int sum1 = 0, temp = x;
    while (x > 0)
    {
        sum1 += x%10;
        x/=10;
    }
    return sum1;
}