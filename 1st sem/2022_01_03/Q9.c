//Q9
//Sum of all even digits in a number

#include<stdio.h>

int sum_even(int num, int sum){
    if (num<= 0)
        return sum;

    int last_digit = num%10;   
    if (last_digit % 2 == 0)
        sum += last_digit;

    num/=10;
    sum_even(num, sum);    
}

int main(int argc, char const *argv[])
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int res = sum_even(num, 0);
    printf("The sum of even digits of %d is %d", num, res);
    return 0;
}
