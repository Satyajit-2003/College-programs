//Q2
//Sum of numbers upto n

#include<stdio.h>

int count =1, sum =0, n;

void sum_upto(){
    if (count<n+1)
    {
        sum+= count;
        count++;
        sum_upto();
    }
    return; 
}


int main()
{
    printf("Input n: ");
    scanf("%d", &n);
    sum_upto();
    printf("The sum is: %d", sum);
    return 0;
}
