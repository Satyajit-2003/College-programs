//Q2
//Sum of numbers upto n

#include<stdio.h>

int count =1, sum =0, size;

void sum_upto(){
    if (count<size+1)
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
    scanf("%d", &size);
    sum_upto();
    printf("The sum is: %d", sum);
    return 0;
}
