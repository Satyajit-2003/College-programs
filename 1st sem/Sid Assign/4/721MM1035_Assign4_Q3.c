/* Roll No: 721MM1035
Name : Siddhartha Priyadarshi*/

#include<stdio.h>

int main(){
    int num, sum = 0;
    printf("Input the number: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++)
    {
        if (num%i == 0)
            sum+= i;     
    }
    if (num == sum)
        printf("It is a perfect number");
    else
        printf("It is not a perfect number");
        
}