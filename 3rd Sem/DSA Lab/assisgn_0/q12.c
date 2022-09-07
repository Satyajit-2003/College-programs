#include<stdio.h>

//WAP to print the numbers which are divisible by 7 and 13 within a range

int main(){
    int upper, lower;
    printf("Enter lower range: ");
    scanf("%d", &lower);
    printf("Enter upper range: ");
    scanf("%d", &upper);

    printf("Number divisible by both 7 and 13:\n");
    for (int i = lower; i < upper + 1; i++){
        if (i % 13 == 0 && i%7 == 0)
            printf("%d ", i);
    }
}