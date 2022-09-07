#include<stdio.h>

int main()
{    
    int num,t, sum = 0, temp;

    printf("Enter a number: ");
    scanf("%d",&num);

    temp = num;

    while (num>0)
    {
        t = num%10;
        sum+= t*t*t;
        num/=10;   
    }

    if (sum == temp) 
        printf("The number is armstrong number\n");
    else
        printf("The number is not armstrong number\n");


    return 0;
}