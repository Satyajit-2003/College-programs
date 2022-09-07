#include<stdio.h>

int odd_or_not(int num);

int main()
{
    int n;
    printf("Enter num1: ");
    scanf("%d",&n);
    int res = odd_or_not(n);
    if (res)
        printf("The number is odd");
    else
        printf("The number is even");
    return 0;
}


int odd_or_not(int num){
    if (num%2 == 1)
        return 1;
    return 0;
}
