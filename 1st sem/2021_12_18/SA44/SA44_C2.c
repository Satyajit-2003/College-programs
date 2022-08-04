#include<stdio.h>

void sum(int n);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    sum(n);
    return 0;
}

void sum(int n){
    int sum = 0;    

    printf("The sum of the digits of %d is ",n);
    while (n>0)
    {
        sum += n%10;
        n /= 10;
    }
    printf("%d",sum);
    
}