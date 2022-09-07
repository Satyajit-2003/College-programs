//Q1
//Print first 50 natural numbers

#include<stdio.h>

int count = 1;

void count_50(){
    if (count<51){
        printf("%d\t", count);
        count++;
        count_50();
    }
    return;    
}

int main()
{
    count_50();
    return 0;
}
