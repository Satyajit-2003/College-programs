/* Roll No: 721MM1035
Name : Siddhartha Priyadarshi*/

#include<stdio.h>

int main(){
    int num, sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);

    sum += num%10;
    num/=10;
    sum += num%10;
    num/=10;
    sum += num%10;
    num/=10;
    sum += num%10;
    num/=10;
    
    printf("The sum of digits of the number is %d", sum);
    return 0;
}
