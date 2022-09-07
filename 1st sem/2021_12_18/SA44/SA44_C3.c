#include<stdio.h>

int sum(int n);

int main()
{
    int n, res;
    printf("Enter a number: ");
    scanf("%d",&n);
    res = sum(n);
    printf("The sum of the digits of %d is %d", n, res);
    return 0;
}

int sum(int n){
    int sum = 0;    

    while (n>0)
    {
        sum += n%10;
        n /= 10;
    }
    return sum;
}