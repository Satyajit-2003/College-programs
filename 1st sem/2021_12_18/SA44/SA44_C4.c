#include<stdio.h>

int sum();

int main()
{
    int res;    
    res = sum();
    printf("%d",res);
    return 0;
}

int sum(){
    int sum = 0, n;    
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("The sum of didgits if %d is ", n);
    while (n>0)
    {
        sum += n%10;
        n /= 10;
    }
    return sum;
}