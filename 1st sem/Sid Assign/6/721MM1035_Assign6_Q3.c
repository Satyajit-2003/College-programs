/* Roll No: 721MM1035
Name : Siddhartha Priyadarshi*/

#include<stdio.h>

int is_perfect(int num){
    int sum = 0;
    for (int i = 1; i < num; i++){
        if (num % i == 0)
            sum += i;
    }

    if (sum == num)
        return 1;
    return 0;

}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (is_perfect(num))
        printf("%d is a perfect number", num);
    else    
        printf("%d is not a perfect number", num);

    return 0;
}