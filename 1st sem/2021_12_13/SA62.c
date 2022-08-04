#include<stdio.h>

int fact(int x){
    int fact1 = 1;
    for (int i = 2; i < x+1; i++)
        fact1*=i;
    return fact1;
}    

int main()
{
    int num1;
    printf("Enter a number: ");
    scanf("%d",&num1);

    int fact1 = fact(num1);

    printf("The factorial of %d id %d", num1, fact1);
    return 0;
}
