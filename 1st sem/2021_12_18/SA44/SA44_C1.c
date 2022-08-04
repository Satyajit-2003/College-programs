#include<stdio.h>

void sum();

int main()
{
    sum();
    return 0;
}

void sum(){
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("The sum of the digits of %d is ",n);
    while (n>0)
    {
        sum += n%10;
        n /= 10;
    }
    printf("%d",sum);
    
}